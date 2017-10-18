/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int main(){
    /*Se declara la variable que almacenará el valor (cantidad)*/
    int value;

    /*Se pregunta la cantidad*/
    printf("¿Valor a comprobar?: ");
    value = get_int();

    /*Se comprueba que sea divisible de 2*/
    if (value % 2 == 0)
        printf("La cantidad %d, es PAR\n", value);
    else
        printf("La cantidad %d, es IMPAR\n", value);

    /*Valor de retorno 0, acá no hay comprobación de error, así que es irrelevante*/
    return 0;
}