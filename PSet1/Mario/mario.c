/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int GenerarPared(int);

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void){
    int altura; /*Declaración de una variable entera positiva*/

    do {
        printf("¿Altura de la pirámide?: ");    /*Imprimir formato por pantalla*/
        altura = get_int();         /*Obteniendo un dato entero por teclado y almacenando en la variable*/
    } while (altura < 0 || altura > 23);

    GenerarPared(altura);

    return 0;
}

/*Funcion que simula formar la pared de Mario*/
int GenerarPared(altura){
    int i = 0, j;

    /*Se recorren las filas, dependiendo de la altura*/
    for (; i<=altura+1; i++){
        for (j=altura+1; j>0; j--)
            if (j <= i)
                if (i == 1 && j == 1)
                    printf(" ");
                else
                    printf("#");
            else
                printf(" ");
        printf("\n");
    }
    /*¿Pereza al comentar? Déjame decirte que no eres el único*/
    return 0;
}