/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int start_index, i = 0, swap, j;

    for (; i < n; i++){
        start_index = i;

        for (j = (i+1); j < n; j++){
            if (values[j] < values[start_index]){
                start_index = j;
            }
        }

        swap = values[i];
        values[i] = values[start_index];
        values[start_index] = swap;
    }

    // TODO: implement an O(n^2) sorting algorithm
    return;
}

bool busqueda_lineal(int value, int values[], int n){
   int valor_bool = 0, i = 0;

    if (n < 1)
        return false;

    for (; i < n; i++){
        if (values[i] == value){
            valor_bool = 1;
            break;
        }
    }

    if (valor_bool == 1)
        return true;

    return false;
}

bool busqueda_binaria(int value, int values[], int n){
    int start_index = 0, other_index = 0, end_index;

    end_index = (n-1);

    while (start_index <= end_index){
        other_index = (start_index + end_index) / 2;

        if (value == values[other_index]){
            printf("Encontrado...");
            return true;
        } else if (value < values[other_index]){
            end_index = other_index - 1;
        } else {
            start_index = other_index + 1;
        }
    }

    return false;
}

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{

    return busqueda_binaria(value, values, n);

    // TODO: implement a searching algorithm
   // return false;
}