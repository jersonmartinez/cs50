/*Inclusión de las librerías*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(){
    int i = 0;
    string s;

    /*Se lee el string*/
    s = get_string();

    /*Se recorre el string de acuerdo a su longitud*/
    for (; i < strlen(s); i++){
        if (i == 0)
            printf("%c", toupper(s[i]));    /*Se especifica la primer caracter en mayùscula*/
        if (s[i] == 32)
            printf("%c", toupper(s[i+1]));  /*Se obtiene el primer caracter después de encontrar un espacio*/
    }

    printf("\n");

    return 0;
}