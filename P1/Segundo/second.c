#include <stdio.h>
#include <cs50.h>

int main(void){

    int v1, v2;

    printf("Valor 1: ");
    v1 = get_int();

    printf("Valor 2: ");
    v2 = get_int();

    if (v1 > v2)
        printf("%d es mayor que %d", v1, v2);

    return 0;
}