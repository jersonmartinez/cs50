/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*2- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int main(){
    int val[3], i = 0, count = 0;

    for (; i<3; i++)
        val[i] = get_int();

    for (i = 0; i<2; i++)
        if (val[i] > val[i+1])
            count++;

    if (count == 2)
        printf("Los ha ingresado en orden decreciente\n");

    return 0;
}