/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */

/*Una constante con valor nulo*/
#define _XOPEN_SOURCE

/*Definición de las librerías*/
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Definición de una constante con valor límite del tipo de dato entero*/
#define LIMIT 65536

/*Definición de la función principal, pasando por argumento el contador y el valor*/
int main(int argc, string argv[])
{
    // TODO: comment me
    /*Se verifica que que vengan los parámetros*/
    if (argc != 2 && argc != 3)
    {
        /*Entra si los parámetros a la función principal no han sido establecidos*/
        printf("Usage: generate n [s]\n");
        return 1; /*Se retorna un valor entero positivo en caso de necesitar los valores*/
    }

    // TODO: comment me
    /*Se convierte el parámetro argv[1] de tipo cadena a entero*/
    int n = atoi(argv[1]);

    // TODO: comment me
    /*En caso de que vengan los dos parámetros*/
    if (argc == 3)
    {
        /*Se ejecuta srand48, representando el valor que el generador de números debe usar como su semilla*/
        /*Se convierte el valor tipo cadena a un valor entero largo*/
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        /*En caso de que sea sólo un parámetro, se escribe el time de la estructura a null*/
        /*srand48, obtiene el valor convertido en entero largo*/
        srand48((long int) time(NULL));
    }

    // TODO: comment me
    /*Se recorre n veces, el primer parámetro, hipotético ya que el primero es el nombre del programa*/
    /*Para calular el rango de cantidades aleatorias, con drand48 haciendo multiplicación con el límite, que serían expuesta en la variable tipo constante*/
    for (int i = 0; i < n; i++)
    {
        /*Este valor aleatorio será obtenido, teniendo este un límite para ser almacenado como un valor entero y luego ser mostrado*/
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    /*Vamos, si se ha llegado hasta acá, aplicación correcta, se puede morir en paz*/
    return 0;
}