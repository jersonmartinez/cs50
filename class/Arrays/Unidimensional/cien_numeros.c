#include <cs50.h>
#include <stdio.h>

int main(){

    int val[100];

    for (int i=0; i<100; i++)
        val[i] = i+1;

    for (int i=0; i<100; i++)
        printf("%5d\t", val[i]);

    return 0;
}