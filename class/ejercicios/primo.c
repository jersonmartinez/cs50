/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*2- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
/*3- Librería math para aplicar algunas funciones de cálculos matemáticos*/
#include <stdio.h>
#include <cs50.h>
#include <math.h>

/*Declaración de la función primo*/
int primo(int);

/*Definición de la función*/
int main(){
    int i = 1;

    for (; i<=1000; i++)
       if (primo(i))
           printf("El número %d, es primo\n", i);

    /*Valor de retorno 0, acá no hay comprobación de error, así que es irrelevante*/
    return 0;
}

/*Se define una función para calcular si es primo*/
int primo(int p){                   /*Se le pasa por parámetro el valor a calcular*/
    int i = 2;                      /*Se inicializa una variable con valor 2*/

    if(p < 2)                       /*Se verifica si el dato que me envían es menor que 2*/
        return 0;                   /*Si es menor, entonces no es primo*/

    for (; i <= sqrt(p); i++)       /*¡Ojo! Se recorre con un ciclo, condicionando el resultado de la raíz del valor, siendo menor o igual*/
        if (p % i == 0)             /*Se verifica si el valor recibido es divisible de i (valor mayor que 1)*/
            return 0;               /*Si entra retorna que no es primo*/

    return 1;                       /*Llega hasta el final comprobando de que si es primo*/
}