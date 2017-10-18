/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Declaración de una función*/
int GenerarCuadrado(int);

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void)
{
    int f; /*Declaración de variables entera*/

    printf("Medida del cuadrado: ");    /*Imprimir formato por pantalla*/
    f = get_int();         /*Obteniendo un dato entero por teclado y almacenando en la variable*/

    /*Función que realiza la operación*/
     /*El entero retornado que se había declarado en la función*/
    if (GenerarCuadrado(f) != false)
        printf("Ha ocurrido un problema, vuelva a intentarlo\n");

    return 0;
}

int GenerarCuadrado(int f){
    int i = 0, j;  /*Declaración de variables entera*/
    char asterisco;

    asterisco = '*';

    /*Aplicando el ciclo FOR, donde se le pasa un valor inicial, la condición y propiedad de iteración*/
    for (; i < f; i++){
        for (j = 0; j < f; j++)
            printf("%5c", asterisco);
        printf("\n");
    }

    /*Se condiciona si realmente ha ocurrido la iteración completa en el ciclo*/
    if ((i-1) == f)
        return 1;   /*Si todo ha salido bien, se retorna 1*/

    return 0;   /*Si algo ha salido mal, se retorna 0*/
}