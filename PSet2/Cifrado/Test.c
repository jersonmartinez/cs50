#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(){
    int ABC[26], abc[26], size, k, a = 65, b = 97, x = 0, i = 0, j;
    char ciphred[4096];

    string s;

    printf("Mensaje a cifrar: ");
    s = get_string();

    size = (int)(sizeof(ABC) / sizeof(int));

    printf("Clave: ");
    k = get_int();

    for (; x < size; x++){
        ABC[x] = a++;
        abc[x] = b++;
    }

    for (; i < strlen(s); i++){

        if (s[i] == 32){
            ciphred[i] = 32;
        } else {
            for (j = 0; j < size; j++){
                if (s[i] == ABC[j]){

                   if (s[i] == 90){
                       ciphred[i] = ABC[k-1];
                       printf("%5c %5d - %5c %5d\n", s[i], ABC[j], ABC[k-1], ABC[k-1]);
                   } else {
                       ciphred[i] = ABC[j+k];
                       printf("%5c %5d - %5c %5d\n", s[i], ABC[j], ABC[j+k], ABC[j+k]);
                   }

                } else if (s[i] == abc[j]){
                    if (s[i] == 122){
                        ciphred[i] = abc[k-1];
                        printf("%5c %5d - %5c %5d\n", s[i], abc[j], abc[k-1], abc[k-1]);
                    } else {
                        ciphred[i] = abc[j+k];
                        printf("%5c %5d - %5c %5d\n", s[i], abc[j], abc[j+k], abc[j+k]);
                    }
                }
            }
        }
    }

    ciphred[i+1] = '\0';

    printf("\n------------------------------\n");
    printf("Texto cifrada");
    printf("\n------------------------------\n");
    printf("%s", ciphred);
    printf("\n------------------------------\n");

    return 0;
}