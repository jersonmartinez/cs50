#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    char letra, clave;
    int m, i = 0, j, result, n;
    string text;

    if (argc != 2){
        printf("Usage: ./vigenere <keyword>\n");
        return 1;
    }

    m = strlen(argv[1]);

    for (; i < m; i++){
        if (isalpha(argv[1]) == false){
            printf("Debe contener sólo letras de A-Z y a-z\n");
            return 1;
        }
    }

    text = get_string();
    n = strlen(text);

    for (i = 0, j = 0, result = 0; i < n;  i++){
        letra = text[i];
        clave = argv[1][(j) % m];

        if (isupper(clave))
            clave -= 65;
        else if (islower(clave))
            clave -=97;

        if (isupper(letra)){
            result = (letra + clave - 65) % 26 + 65;
            j++;
        } else if (islower(letra)){
            result = (letra + clave - 97) % 26 + 97;
        } else {
            result = letra;
        }

        printf("%c", result);

    }

    printf("\n");

    return 0;
}