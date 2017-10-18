/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*1- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

/*Definición de la función*/
int Botellas(int);

/*Declaración de la función principal con retorno entero, nada por parámetros*/
int main(void){
    unsigned int t; /*Declaración de una variable entera positiva*/

    printf("¿Cuántos minutos tarda duchándose?: ");    /*Imprimir formato por pantalla*/
    t = get_int();         /*Obteniendo un dato entero por teclado y almacenando en la variable*/

    printf("\nUsted gasta apróximadamente %d botellas de agua cada %d minuto(s)\n", Botellas(t), t);

    return 0;
}

/*Función que calcula el número de botellas de agua que se gasta en minutos de ducha*/
int Botellas(int t_min){
    return (192 * t_min) / 16;  /*Operación sencilla, dictada por PSet1*/
}