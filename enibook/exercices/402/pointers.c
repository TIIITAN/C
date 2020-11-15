#include "pointers.h"

int countMultiples(int *ptr_table, int divisor, int nombre_element_table)
{
	int result=0;

	for(int i=0 ; i < nombre_element_table ; i++)
	{
		if(ptr_table[i]%divisor==0)
			result++;
	}

	return result;
}

void cancelMultiples(int *ptr_table, int divisor, int nombre_element_table)
{
	for(int i=0 ; i < nombre_element_table ; i++)
	{
		if(ptr_table[i]%divisor==0)
			ptr_table[i]=1;
	}
}

void clampValues(double *ptr_table, double low, double high, int nombre_element_table)
{
	for(int i=0 ; i < nombre_element_table ; i++)
	{
		if(ptr_table[i]<low)
			ptr_table[i]=low;
		if(ptr_table[i]>high)
			ptr_table[i]=high;
	}
}

int countOutOfBounds(double *ptr_table, double low, double high, int nombre_element_table)
{
	int result=0;

	for(int i=0 ; i < nombre_element_table ; i++)
	{
		if((ptr_table[i]<low) || (ptr_table[i]>high))
			result++;
	}

	return result;
}

void negativeScale(double *ptr_table, double factor, int nombre_element_table)
{
	for(int i=0 ; i < nombre_element_table ; i++)
	{
		if(ptr_table[i]<0)
			ptr_table[i]*=factor;
	}
}

double negativeSum(double *ptr_table, int nombre_element_table)
{
	double result=0;

	for(int i=0 ; i < nombre_element_table ; i++)
	{
		if(ptr_table[i]<0)
			result+=ptr_table[i];
	}

	return result;
}
