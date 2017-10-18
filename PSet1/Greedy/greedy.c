/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int GenerarPared(int);

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void){
    /*Declaración de las variable*/
    int q = 0, d = 0, n = 0, p = 0;
    float quarters = .25, dimes = .10, nickels = .05, pennies = .01, change = .0, change_copy = .0;

    /*Centinela*/
    do {
        printf("¿Cuánto cambio se debe entregar?: $");
        change = get_float();
    } while (change <= 0);

    /*Se realia una copia del contenido*/
    change_copy = change;

    /*Se comprueba la cantidad de Quarters*/
    while (change >= quarters){
        change -= quarters;
        q++;
    }

    /*Se comprueba la cantidad de Dimes*/
    while (change >= dimes){
        change -= dimes;
        d++;
    }

    /*Se comprueba la cantidad de Nickels*/
    while (change >= nickels){
        change -= nickels;
        n++;
    }

    /*Se comprueba la cantidad de Pennies*/
    while (change >= pennies){
        change -= pennies;
        p++;
    }

    printf("--------------------------------------\n");
    printf("|Cambio de la cantidad: $%.2f \n", change_copy);
    printf("--------------------------------------\n");
    printf("|Quarters | Dimes | Nickels | Pennies|\n");
    printf("%5d¢ %8d¢ %7d¢ %8d¢\n", q, d, n, p);

    return 0;
}