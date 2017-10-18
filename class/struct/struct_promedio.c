#include <stdio.h>
#include <cs50.h>

#define LIMIT 2

struct Status {
    string name;
    int v[5];

    int pr;
} notes[LIMIT];

int show_notes(int);
int sum_notes(struct Status);

int main(void){
    int i, j;

    for (j = 0; j < LIMIT; j++){
        printf("Dime tu nombre: ");
        notes[j].name = get_string();

        printf("Escribe las notas del estudiante %s\n", notes[j].name);
        for (i = 0; i < 5; i++){
            printf("Nota[%d]: ", i+1);
            notes[j].v[i] = get_int();
        }
    }

    for (j = 0; j < LIMIT; j++)
        notes[j].pr = sum_notes(notes[j]);

    show_notes(LIMIT);

    return 0;
}

int show_notes(limit){
    int i, j;
    // struct Status show_notes[5];
    printf("\n===========================\n");
    for (i = 0; i < limit; i++){
        printf("Est. [%s]\n", notes[i].name);

        for (j = 0; j < 5; j++)
            printf("Nota [%d]: %d\n", (i+1), notes[i].v[j]);

        printf("Promedio: %d\n", notes[i].pr);
        printf("---------------------------\n");

        if (notes[i].pr >= 80)
            printf("Tiene beca");
        else
            printf("Usted no tiene beca");
    }

    return 0;
}

int sum_notes(struct Status new_notes){
    int sum = 0, i;
    for (i = 0; i < LIMIT; i++)
        sum += new_notes.v[i];

    return sum / LIMIT;
}