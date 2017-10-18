#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]){
    int k, a = 65, b = 97, i = 0, j;

    string s;

    if (argc != 2) {
        return 1;
    } else {
        k = atoi(argv[argc-1]);
    }

    printf("plaintext: ");
    s = get_string();

    for (; i < strlen(s); i++)
        for (j = 0; j < k; j++)
            if ((s[i] >= a && s[i] < 90) || (s[i] >= b && s[i] < 122))
                s[i]++;
            else if(s[i] == 90)
                s[i] = a;
            else if(s[i] == 122)
                s[i] = b;

    printf("ciphertext: %s\n",s);

    return 0;
}