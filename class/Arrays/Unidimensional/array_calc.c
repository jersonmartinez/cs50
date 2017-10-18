#include <stdio.h>
#include <cs50.h>

int main(){

    int Array[5], size, i = 0;
    float adicion = 0, sustraccion = 0, multiplicacion = 1, division = 1;

    size = (int)(sizeof(Array) / sizeof(int));

    for (; i < size; i++){
        printf("Posición [%d]: ", i);
        Array[i] = get_float();

        adicion         += Array[i];
        sustraccion     -= Array[i];
        multiplicacion  *= Array[i];
        division        /= Array[i];
    }

    printf("\nAdición: %12.2f\nSustracción: %8.2f\nMultiplicación: %5.2f\nDivisión%12.2f\n", adicion, sustraccion, multiplicacion, division);

    return 0;
}