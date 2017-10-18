/*Que muestre los primeros 100 números de izquierda a derecha usando un array de dos dimensiones*/
#include <stdio.h>
#include <cs50.h>

#define MAX 10

int main(){

    int ArrayTwo[MAX][MAX], i=0, j, count = 0;

    for (; i<MAX; i++)
        for (j=0; j<MAX; j++)
            ArrayTwo[i][j] = (++count);

    printf("\n-----------------\n");
    printf("|   IZQ\t  DER   |\n");
    printf("-----------------");

    for (i=0; i<MAX; i++)
        for (j=0; j<MAX; j++)
            if (j % 2 == 1)
                printf("%5d\t| ", ArrayTwo[i][j]);
            else
                printf("\n|%5d\t|", ArrayTwo[i][j]);

    printf("\n-----------------\n");
    return 0;
}