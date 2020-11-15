#include <stdlib.h>
#include <math.h>

#include "allocation.h"

int *arithmeticSequence(int count, int initValue, int increment)
{
	int *table = NULL;

	table = (int*)malloc((size_t)count * sizeof(int));

	if(table == NULL)
		abort();

	for(int i=0 ; i < count ; i++)
	{
		table[i] = initValue + i * increment;
	}

	return table;

}

double *geometricSequence(int count, double initValue, double factor)
{
	double *table = NULL;

	table = (double*)malloc((size_t)count * sizeof(double));

	if(table == NULL)
		abort();

	for(int i=0 ; i < count ; i++)
	{
		table[i] = initValue * pow(factor, i);
	}

	return table;

}

char *asciiSequence(int count, int firstCode)
{
	char *table = NULL;

	table = (char*)malloc((size_t)count * sizeof(char));

	if(table == NULL)
		abort();

	for(int i=0 ; i < count ; i++)
	{
		table[i] = (char)firstCode;
		firstCode++;
	}

	return table;

}