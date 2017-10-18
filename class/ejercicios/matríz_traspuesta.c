/*Se agregan las librerías*/
/*1- Librería standard de entrada y salida de datos*/
/*2- Librería CS50 que nos ayuda a comprender mejor con funciones sencillas*/
#include <stdio.h>
#include <cs50.h>

#define MAX 10

/*Definición de la función*/
int main(){
    int M[MAX][MAX], size = 0, i = 0, j;

    for (; i<MAX; i++){
        for (j=0; j<MAX; j++){
            M[i][j] = (++size);
            printf("%5d", M[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++)
            printf("%5d", M[j][i]);

        printf("\n");
    }

    return 0;
}