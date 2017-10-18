/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Declaración de una función*/
int Iterar(int);

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void)
{
    int v1; /*Declaración de variables entera*/

    printf("Número de iteraciones: ");    /*Imprimir formato por pantalla*/
    v1 = get_int();         /*Obteniendo un dato entero por teclado y almacenando en la variable*/

    /*Función que realiza la operación*/

     /*El entero retornado que se había declarado en la función*/
    if (Iterar(v1) != false)
        printf("Ha ocurrido un problema, vuelva a intentarlo\n");

    return 0;
}

int Iterar(int v1){
    int i = 0;  /*Declaración de variables entera*/

    /*Aplicando el ciclo FOR, donde se le pasa un valor inicial, la condición y propiedad de iteración*/
    for (; i < v1; i++)
        printf("Imprimiendo: %d \n", i + 1);

    /*Se condiciona si realmente ha ocurrido la iteración completa en el ciclo*/
    if ((i-1) == v1)
        return 1;   /*Si todo ha salido bien, se retorna 1*/

    return 0;   /*Si algo ha salido mal, se retorna 0*/
}