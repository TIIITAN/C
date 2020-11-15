#include <stdlib.h>

#include "pointers.h"

void adjustMin(double* ptr_a, double* ptr_b)
{
	if(*ptr_a<*ptr_b)
	{
		*ptr_a+=(*ptr_b-*ptr_a)/2;
	}
	if(*ptr_a>*ptr_b)
	{
		*ptr_b+=(*ptr_a-*ptr_b)/2;
	}
}

void adjustMax(double* ptr_c, double* ptr_d)
{
	if(*ptr_c<*ptr_d)
	{
		*ptr_d-=(*ptr_d-*ptr_c)/2;
	}
	if(*ptr_c>*ptr_d)
	{
		*ptr_c-=(*ptr_c-*ptr_d)/2;
	}
}

void decomposeTime(double duration, int *ptr_heure, double *ptr_minute)
{
	*ptr_heure = (int)duration;

	*ptr_minute = (duration - (double)*ptr_heure)*60;
}


