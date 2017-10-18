/**
 * helpers.h
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
#include <stdio.h>
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */

bool busqueda_lineal(int value, int values[], int n);
bool busqueda_binaria(int value, int values[], int n);

bool search(int value, int values[], int n);

/**
 * Sorts array of n values.
 */
void sort(int values[], int n);