#include <stdio.h>
#include <cs50.h>

int main(){

    int option;
    float v1, v2;

    do {
        printf("¿Qué operación desea realizar?\n");
        printf("(1) Adición | (2) Sustracción | (3) Multiplicación | (4) División\n");
        printf("Esperando respuesta: ");
        option = get_int();

    } while (option < 1 || option > 4);

    printf("\n¿Cuáles son las valores en V1 y V2?\n");
    printf("V1: "); v1 = get_float();
    printf("V2: "); v2 = get_float();

    switch (option){
        case 1:
            printf("(%2.f + %2.f) = %2.f\n", v1, v2, (v1 + v2));
            break;
        case 2:
            printf("(%2.f - %2.f) = %2.f\n", v1, v2, (v1 - v2));
            break;
        case 3:
            printf("(%2.f * %2.f) = %2.f\n", v1, v2, (v1 * v2));
            break;
        case 4:
            printf("(%2.f / %2.f) = %2.f\n", v1, v2, (v1 / v2));
            break;
    }

    return 0;
}