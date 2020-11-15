#include <stdio.h>

#include "pointers.h"

void test_array_multiples(void)
{
	printf("\n---------- test_array_multiples() ----------\n");

	int tableau[]={2,3,4,6,7,10,13};
	int divisor=2;
	int nombre_element_tableau = (int)(sizeof(tableau)/sizeof(tableau[0]));

	int count=countMultiples(tableau,divisor,nombre_element_tableau);
	printf("Nombre de multiples = %d\n", count);

	for(int i=0 ; i < nombre_element_tableau ; i++)
		printf("[%d]", tableau[i]);

	cancelMultiples(tableau,divisor,nombre_element_tableau);
	printf(" \n");

	for(int i=0 ; i < nombre_element_tableau ; i++)
		printf("[%d]", tableau[i]);

	count=countMultiples(tableau,divisor,nombre_element_tableau);
	printf("\nNombre de multiples = %d\n", count);
}

void test_array_bounds(void)
{
	printf("\n---------- test_array_bounds() ----------\n");

	double tableau[]={2.3,3.1,4.6,6.2,7.0,10.7,13.9};
	double low=4.2;
	double high=10.5;
	int nombre_element_tableau = (int)(sizeof(tableau)/sizeof(tableau[0]));

	int count=countOutOfBounds(tableau,low,high,nombre_element_tableau);
	printf("Number out of bounds = %d\n", count);

	for(int i=0 ; i < nombre_element_tableau ; i++)
		printf("[%f]", tableau[i]);

	clampValues(tableau,low,high,nombre_element_tableau);
	printf(" \n");

	for(int i=0 ; i < nombre_element_tableau ; i++)
		printf("[%f]", tableau[i]);

	count=countOutOfBounds(tableau,low,high,nombre_element_tableau);
	printf("\nNumber out of bounds = %d\n", count);
}

void test_array_negative(void)
{
	printf("\n---------- test_array_negative() ----------\n");

	double tableau[]={-6.3,-4.8,-3.1,-0.9,2.2,4.1,6.5};
	double factor=2.4;
	int nombre_element_tableau = (int)(sizeof(tableau)/sizeof(tableau[0]));

	double count=negativeSum(tableau,nombre_element_tableau);
	printf("Sum of negative numbers = %f\n", count);

	for(int i=0 ; i < nombre_element_tableau ; i++)
		printf("[%f]", tableau[i]);

	negativeScale(tableau,factor,nombre_element_tableau);
	printf(" \n");

	for(int i=0 ; i < nombre_element_tableau ; i++)
		printf("[%f]", tableau[i]);

	count=negativeSum(tableau,nombre_element_tableau);
	printf("\nSum of negative numbers = %f\n", count);
}

int main(void)
{
	test_array_multiples();

	test_array_bounds();

	test_array_negative();

	return 0;
}
