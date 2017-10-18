/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*2- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int main(){
    int val;

    do {
        printf("Escriba el número: ");
        val = get_int();
    } while (val < 1 || val > 7);

    if (val == 1)
        printf("Domingo\n");
    else if (val == 2)
        printf("Lunes\n");
    else if (val == 3)
        printf("Martes\n");
    else if (val == 4)
        printf("Miércoles\n");
    else if (val == 5)
        printf("Jueves\n");
    else if (val == 6)
        printf("Viernes\n");
    else if (val == 7)
        printf("Sábado\n");

    return 0;
}