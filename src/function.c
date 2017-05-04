#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "function.h"


int sum_array(int mass[], int n)
{
    if(n == 0) {
        return 0;
    }
    return mass[n - 1] + sum_array(mass, n - 1);
}

int summ_array_iteration(int mass[], int n, int counter)
{
    if(n == 0) {
        return counter;
    }
    return summ_array_iteration(mass, n - 1, counter + mass[n - 1]);
}


int feb(int n)
{
    return feb_element(1, 1, n);
}

int feb_element(int A, int B, int n)
{
    if(n == 1 || n == 0) {
        return B;
    }
    return feb_element(A, B, n - 1) + feb_element(A, B, n - 2);
}

int feb_iteration(int n)
{
    return feb_element_iteration(1, 1, n - 2);
}

int feb_element_iteration(int A, int B, int n)
{
    if(n < 0) {
        return B;
    }
    return feb_element_iteration(B, A + B, n - 1);
}

char *string(int element)
{
    int k = 0, i = element;
    while(i){
        i = i / 10;
        k++;
    }
    char mass[k];
    mass[k] = '\0';
    string_iteration(element, k - 1, mass);
    char *ptr = mass;
    return ptr;
}

int string_iteration(int i, int n, char *mass)
{
    if(n < 0) {
        return 1;
    }
    *(mass + n) = (i % 10) + 48;
    return string_iteration(i / 10, n - 1, mass);
}