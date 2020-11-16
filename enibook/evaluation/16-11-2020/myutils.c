#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "myutils.h"

void to_lower(char* str)
{
	for (int i = 0; i < (int)strlen(str); ++i)
	{
		if(isupper((int)str[i]))
			str[i]=(char)tolower((int)str[i]);
	}
}

void display_note(const char *titre, double *table, int size)
{
	printf("%s ", titre);
	for (int i = 0; i < size; ++i)
	{
		printf("[%f]", table[i]);
	}
	printf(" \n");
}

double average(double *table, int size)
{
	double somme=0;

	for (int i = 0; i < size; ++i)
		somme += table[i];
	
	double moyenne = somme/(double)size;

	return moyenne;
}

int count_notes_above_average(double *table, int size)
{
	double moyenne = average(table, size);

	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if(table[i]>moyenne)
			count++;
	}

	return count;
}

int copy_notes_above_average(double *table1, int size1, double *table2, int size2)
{
	double moyenne = average(table1, size1);
	int count=0;

	for (int i = 0; i < size1; ++i)
	{
		if((table1[i]>=moyenne)&&(count<size2))
		{
			table2[count]=table1[i];
			count++;
		}
	}

	return count;
}

double *allocate_notes_above_average(double *table, int size, int *capa)
{
	int count = count_notes_above_average(table, size);

	double *set=(double *)malloc((size_t)count*sizeof(double));
  	if(!set)
   	 	abort();

   	*capa = copy_notes_above_average(table, size, set, count);

   	return set;
}