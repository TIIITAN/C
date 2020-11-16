#include "newTypes.h"

Interval Interval_add(Interval interval1, Interval interval2)
{
	Interval result;

	result.low = interval1.low + interval2.low;
	result.high = interval1.high + interval2.high;

	return result;
}

Fraction Fraction_add(Fraction fraq1, Fraction fraq2)
{
	Fraction result;

	result.numer = fraq1.numer*fraq2.denom + fraq2.numer*fraq1.denom;
	result.denom = fraq1.denom*fraq2.denom;

	return result;
}

Rectangle Rectangle_add(Rectangle rectangle1, Rectangle rectangle2)
{
	Rectangle result;

	result.width = rectangle1.width + rectangle2.width;
	result.height = rectangle1.height + rectangle2.height;

	return result;
}