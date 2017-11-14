/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "dictionary.h"

typedef struct nodo {
    bool EstaPalabra;
    struct nodo* hijos[27];
} nodo;

nodo* principal;

// Variable global que obtiene la longitud del diccionario.
int LongDiccionario = 0;

// Aplicando recursividad para liberar memoria.
void Liberando(nodo* hijos){
    for (int i=0; i < 27; i++)
        if (hijos->hijos[i] != NULL)
            Liberando(hijos->hijos[i]);

    free(hijos);
}

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word) {
    int Instancia;

    // Se asigna el primer nodo.
    nodo* PrimerNodo = principal;

    for (int i=0; word[i] != '\0'; i++){
        if (word[i] == '\'')
            Instancia = 26;
        else
            Instancia = tolower(word[i]) - 'a';

        PrimerNodo = PrimerNodo->hijos[Instancia];

        // Si es NULL, la palabra está mal escrita.
        if (PrimerNodo == NULL)
            return false;
    }

    if (PrimerNodo->EstaPalabra == true)
        return true;

    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary){
    // Se le da lectura al diccionario.
    FILE* file = fopen(dictionary, "r");

    int Instancia;
    char Palabra[LENGTH + 1];

    // En caso de que el fichero no se haya podido leer.
    if (file == NULL)
        return false;

    // Inicianlizando y asignando.
    principal = malloc(sizeof(nodo));
    principal->EstaPalabra = false;

    for (int j=0; j < 27; j++){
        principal->hijos[j] = NULL;
    }

    // Se evalúan hasta los saltos de línea y fin de palabra
    while (fscanf(file, "%s\n", Palabra) != EOF){
        nodo* PrimerNodo = principal;

        for (int i=0; Palabra[i] != '\0'; i++){
            if (Palabra[i] == '\'')
                Instancia = 26;
            else
                Instancia = tolower(Palabra[i]) - 'a';

            if (PrimerNodo->hijos[Instancia] == NULL){
                // Nuevo nodo
                nodo* SegundoNodo = malloc(sizeof(nodo));
                SegundoNodo->EstaPalabra = false;

                for (int k=0; k < 27; k++)
                    SegundoNodo->hijos[k] = NULL;

                PrimerNodo->hijos[Instancia] = SegundoNodo;
            }

            PrimerNodo = PrimerNodo->hijos[Instancia];
        }

        PrimerNodo->EstaPalabra = true;
        LongDiccionario++;
    }

    // Cerrar el fichero.
    fclose(file);

    // Salida exitosa
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void){
    return LongDiccionario;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void){
    // Liberando memoria
    nodo* PrimerNodo = principal;
    Liberando(PrimerNodo);

    return true;
}