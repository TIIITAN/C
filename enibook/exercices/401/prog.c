#include <stdio.h>

#include "pointers.h"

void
test_adjustMin(void)
{
	printf("\n---------- test_adjustMin()----------\n");

	double a = 11.0;
	double b = 6.0;

	adjustMin(&a, &b);

	printf("a = %f\n", a);
	printf("b = %f\n", b);
}

void
test_adjustMax(void)
{
	printf("\n---------- test_adjustMax()----------\n");

	double c = 11.0;
	double d = 6.0;

	adjustMax(&c, &d);

	printf("c = %f\n", c);
	printf("d = %f\n", d);
}


void
test_decompose(void)
{
	printf("\n---------- test_decompose()----------\n");

	double duration = 3.8;
	int heure;
	double minute;

	decomposeTime(duration, &heure, &minute);

	printf("duration = %f\n", duration);
	printf("heure = %d\n", heure);
	printf("minute = %f\n", minute);


}

int main(void)
{
	test_adjustMin();

	test_adjustMax();

	test_decompose();

	return 0;
}
