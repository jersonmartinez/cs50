/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void)
{
    int edad;       /*Declaración de la variable*/

    printf("Ingrese su edad: ");    /*Impresión por pantalla*/
    edad = get_int();               /*Obtener un número entero*/

    if (edad < 10)               /*Se condiciona la edad si es menor que 10*/
    {
        printf("Eres un niño\n");
    } else if (edad >=0 && edad < 18)   /*Se condiciona la edad si es mayor que 10 y menor que 18*/
    {
        printf("Eres un adolescente\n");
    } else if (edad > 18)               /*Se condiciona la edad si es mayor que 10*/
    {
        printf("Eres un adulto\n");
    } else
    {
        printf("Error");    /*Se condiciona la edad en caso que no tenga solución*/
    }

    return 0;
}