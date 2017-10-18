#include <stdio.h>
#include <cs50.h>

int main(void){
    int a = 10, b = 20, *c, *d;

    c = &a;
    d = &b;

    printf("Suma (a: %d, b: %d = %d)\n", a, b, (*c + *d));

    return 0;
}