#include <stdio.h>
#include <cs50.h>

int main(void){
    int array[5], *p, i = 0;

    p = &array[0];

    for (; i < 5; i++){
        printf("Dato [%d]: ", (i+1));
        (*p) = get_int();
        p++;
    }

    printf("\n");
    for (i = 0; i < 5; i++){
       printf("%5d", array[i]);
    }

    return 0;
}