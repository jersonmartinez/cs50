/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*2- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int main(){

    for (int i=100; i >= 1; i--)
        printf("%5d\t", i);

    return 0;
}