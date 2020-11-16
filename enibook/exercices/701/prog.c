#include <stdio.h>

#include "newTypes.h"

void
test_structure(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  
  Interval i1;
  i1.low = 4.5;
  i1.high = 11.8;

  Interval i2;
  i2.low = 6.1;
  i2.high = 9.7;

  Interval i3 = Interval_add(i1, i2);
  printf("[%f;%f]\n", i3.low, i3.high);

  printf("------------------------------\n");

  Fraction f1;
  f1.numer = 2;
  f1.denom = 5;

  Fraction f2;
  f2.numer = 3;
  f2.denom = 7;

  Fraction f3 = Fraction_add(f1, f2);
  printf("%d/%d\n", f3.numer, f3.denom);

  printf("------------------------------\n");

  Rectangle r1;
  r1.width = 6;
  r1.height = 10;

  Rectangle r2;
  r2.width = 8;
  r2.height = 3;

  Rectangle r3 = Rectangle_add(r1, r2);
  printf("width = %d height = %d\n", r3.width, r3.height);

}

int main(int argc, char const *argv[])
{
	test_structure();

	return 0;
}