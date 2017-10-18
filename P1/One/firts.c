/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void)
{
    int v1, v2; /*Declaración de variables*/

    printf("Valor 1: ");    /*Imprimir formato por pantalla*/
    v1 = get_int();         /*Obteniendo un dato entero por teclado y almacenando en la variable*/

    printf("Valor 2: ");    /*Imprimir formato por pantalla*/
    v2 = get_int();         /*Obteniendo un dato entero por teclado y almacenando en la variable*/

    printf("La suma es: %d", (v1 + v2));    /*Imprimiendo resultados*/

    return 0;               /*El entero retornado que se había declarado en la funcón*/
}