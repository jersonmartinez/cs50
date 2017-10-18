#include <stdio.h>
#include <cs50.h>

int main(){

    int Array[5], i = 0, size, num = 0;

    size = (int)(sizeof(Array) / sizeof(int));

    for (; i < size; i++){
        printf("Posición [%d]: ", i);
        Array[i] = get_int();
    }

    for (i = 0; i < size; i++){
        if (i % 2 == 0){
            num += Array[i];
            printf("La posición %d, es par en el Array, contenido: %d \n", i, Array[i]);
        }
    }

    printf("\nLa suma total del contenido de las posiciones pares es: %d\n", num);

    return 0;
}