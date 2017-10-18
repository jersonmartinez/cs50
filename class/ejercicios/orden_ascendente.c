/*Rellenar un array con los 100 primeros números e imprimir en orden ascendente*/
#include <stdio.h>
#include <cs50.h>

#define MAX 100

int main(){

    int ASC[MAX], i=0;

    for (; i<MAX; i++)
        ASC[i] = i+1;

    for (i=MAX-1; i>=0; i--)
        printf("%5d\t", ASC[i]);

    printf("\n");
    return 0;
}