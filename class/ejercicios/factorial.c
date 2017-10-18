/*Calcular el factorial de un número*/
#include <stdio.h>
#include <cs50.h>

int main(){

    int number, i=1, fact = 1;

    printf("¿Número?: ");
    number = get_int();

    printf("%d! = ", number);

    for (; i <= number; i++)
        fact *= i;

    printf("%d\n", fact);

    return 0;
}