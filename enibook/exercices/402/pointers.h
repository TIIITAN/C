#ifndef POINTERS
#define POINTERS

int countMultiples(int *ptr_table, int divisor, int nombre_element_table);

void cancelMultiples(int *p_table, int divisor, int nombre_element_table);

void clampValues(double *ptr_table, double low, double high, int nombre_element_table);

int countOutOfBounds(double *ptr_table, double low, double high, int nombre_element_table);

void negativeScale(double *ptr_table, double factor, int nombre_element_table);

double negativeSum(double *ptr_table, int nombre_element_table);

#endif