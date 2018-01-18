#include <cs50.h>
#include <stdio.h>

struct nodo {
    int dato;
    struct nodo *siguiente;
};

int insertar(int);

struct nodo *primero;
struct nodo *ultimo;

int main(void){

    insertar(10);

    //lectura
    struct nodo *actual = primero;

    do {
        printf("Dato: %d\n", actual->dato);
        actual = actual->siguiente;
    } while (actual != NULL);

    return 0;
}

int insertar(int v){

    struct nodo *nuevo = malloc(sizeof(struct nodo));

    if (nuevo == NULL)
        return -1;

    nuevo->dato = v;

    if (primero == NULL){
        primero = nuevo;
        ultimo = primero;
    } else {
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }

    return 0;
}