#include <stdio.h>
#include <stdlib.h>

#include "newTypes.h"

double * // dynamic array of count values
allocDummyData(int count)
{
  double *data=(double *)malloc((size_t)count*sizeof(double));
  if(!data)
  {
    abort();
  }
  srand((unsigned int)(size_t)&count); // rely on ASLR for randomisation
  for(int i=0; i<count; ++i)
  {
    data[i]=0.01*(rand()%100);
  }
  return data;
}

char * // dynamic array of length nucleotides (A, G, C or T)
allocDummyNucleotides(int length)
{
  char *nucleotides=(char *)malloc((size_t)length*sizeof(char));
  if(!nucleotides)
  {
    abort();
  }
  const char *AGCT="AGCT";
  srand((unsigned int)(size_t)&length); // rely on ASLR for randomisation
  for(int i=0; i<length; ++i)
  {
    nucleotides[i]=AGCT[rand()%4];
  }
  return nucleotides;
}

int * // dynamic array of size identifiers
allocDummyIdentifiers(int size)
{
  int *identifiers=(int *)malloc((size_t)size*sizeof(int));
  if(!identifiers)
  {
    abort();
  }
  srand((unsigned int)(size_t)&size); // rely on ASLR for randomisation
  for(int i=0; i<size; ++i)
  {
    identifiers[i]=rand()%1000;
  }
  return identifiers;
}

void
test_DataSet(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  
  DataSet set1;
  set1.count = 10000;
  set1.data = allocDummyData(set1.count);

  int factor = 3;

  printf("Moyenne set1 avant scale = %f\n", DataSet_mean(&set1));
  DataSet_scale(&set1, factor);
  printf("Moyenne set1 apres scale = %f\n", DataSet_mean(&set1));

  free(set1.data);
}

void
test_Gene(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  
  Gene set1;
  set1.length = 10000;
  set1.nucleotides = allocDummyNucleotides(set1.length);

  printf("DNA 'T' = %d 'U' = %d\n", Gene_count(&set1, (char)'T'), Gene_count(&set1, (char)'U'));
  Gene_dnaToRna(&set1);
  printf("RNA 'T' = %d 'U' = %d\n", Gene_count(&set1, (char)'T'), Gene_count(&set1, (char)'U'));

  free(set1.nucleotides);
}

void
test_UserBase(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  	
  UserBase base1;
  base1.size = 10000;
  base1.identifiers = allocDummyIdentifiers(base1.size);

  printf("Privileged avant revoque = %d\n", UserBase_privileged(&base1));
  UserBase_revoque(&base1);
  printf("Privileged apres revoque = %d\n", UserBase_privileged(&base1));

  free(base1.identifiers);
}

int main(void)
{
	test_DataSet();

	test_Gene();

	test_UserBase();

	return 0;
}