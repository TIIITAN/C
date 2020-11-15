#include <stdio.h>
#include <stdlib.h>

#include "allocation.h"

void test_sequence(void)
{
	printf("\n---------- test_sequence() ----------\n");

	int count = 5;
	int initValue_1 = 2;
	int increment = 3;

	int *tableau_1 = arithmeticSequence(count, initValue_1, increment);

	for(int i=0 ; i < count ; i++)
	{
		printf("[%d]", tableau_1[i]);
	}
	printf(" \n");

	// ---------------------------------------

	double initValue_2 = 2;
	double factor = 3;

	double *tableau_2 = geometricSequence(count, initValue_2, factor);

	for(int i=0 ; i < count ; i++)
	{
		printf("[%f]", tableau_2[i]);
	}
	printf(" \n");

	// ---------------------------------------

	int firstCode = 71;

	char *tableau_3 = asciiSequence(count, firstCode);

	for(int i=0 ; i < count ; i++)
	{
		printf("[%c]", tableau_3[i]);
	}
	printf(" \n");
}

int main(void)
{
	test_sequence();

	return 0;
}