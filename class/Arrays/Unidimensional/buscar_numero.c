#include <stdio.h>
#include <cs50.h>

int main(){

    int Array[5], i = 0, size, num;

    size = (int)(sizeof(Array) / sizeof(int));

    for (; i < size; i++){
        printf("Posición [%d]: ", i);
        Array[i] = get_int();
    }

    printf("Ingrese el número a buscar: ");
    num = get_int();

    for (i = 0; i < size; i++){
        if (num == Array[i]){
            printf("El número %d ha sido encontrado en la posición [%d] del array.", num, i);
            break;
        }
    }

    if (i == size)
        printf("El número %d no ha sido encontrado.", num);

    printf("\n");

    return 0;
}