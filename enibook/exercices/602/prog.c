#include <stdio.h>
#include <stdlib.h>

#include "allocation.h"

void
displayArray(const char *title,
             const double *elements,
             int count)
{
  printf("%s:", title);
  for(int i=0; i<count; ++i)
  {
    printf(" %g", elements[i]);
  }
  printf("\n");
}

void
test_concatArray(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  int aCount=10;
  double *a=(double *)malloc((size_t)aCount*sizeof(double));
  if(!a)
  {
    abort();
  }
  for(int i=0; i<aCount; ++i)
  {
    a[i]=1.1*i;
  }
  const double b[]={100.0, 102.2, 104.4, 106.6, 108.8};
  const int bCount=(int)(sizeof(b)/sizeof(b[0]));
  displayArray("a before", a, aCount);
  displayArray("b before", b, bCount);

  concatArray(a, b, &aCount, bCount);

  displayArray("a after", a, aCount);
  displayArray("b after", b, bCount);
  free(a);
}

void
test_twiceArray(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  int valueCount=5;
  double *values=(double *)malloc((size_t)valueCount*sizeof(double));
  if(!values)
  {
    abort();
  }
  for(int i=0; i<valueCount; ++i)
  {
    values[i]=1.1*(i+1);
  }
  displayArray("before", values, valueCount);

  twiceArray(values, &valueCount);

  displayArray("after", values, valueCount);
  free(values);
}

void
test_extendArray(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  int valueCount=5;
  double *values=(double *)malloc((size_t)valueCount*sizeof(double));
  if(!values)
  {
    abort();
  }
  for(int i=0; i<valueCount; ++i)
  {
    values[i]=1.1*(i+1);
  }
  displayArray("before", values, valueCount);

  extendArray(values, &valueCount, 10);

  displayArray("after", values, valueCount);
  free(values);
}

int main(void)
{
  test_concatArray();

  test_twiceArray();

  test_extendArray();

  return 0;
}