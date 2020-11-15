#include <stdlib.h>
#include <math.h>

#include "allocation.h"

void concatArray(double *left, const double *right, int *NE_left, const int NE_right)
{
	left = (double*)realloc(left, ((size_t)*NE_left + (size_t)NE_right) * sizeof(double));

	for(int i=*NE_left ; i < (*NE_left + NE_right) ; i++)
	{
		left[i] = right[i-*NE_left];
	}

	*NE_left+= NE_right;
}

void twiceArray(double *tableau, int *NE_tableau)
{
	tableau = (double*)realloc(tableau, 2 * (size_t)*NE_tableau * sizeof(double));

	for(int i=*NE_tableau ; i < (2 * *NE_tableau) ; i++)
	{
		tableau[i] = tableau[i-*NE_tableau];
	}

	*NE_tableau*=2;
}

void extendArray(double *tableau, int *NE_tableau, int extension)
{
	tableau = (double*)realloc(tableau, ((size_t)*NE_tableau + (unsigned int)extension) * sizeof(double));

	for(int i=*NE_tableau ; i < (*NE_tableau + extension) ; i++)
	{
		tableau[i] = tableau[*NE_tableau-1];
	}

	*NE_tableau+=extension;
}