#ifndef NEWTYPES
#define NEWTYPES

typedef struct
{
	double low;
	double high;
} Interval;

typedef struct 
{
	int numer;
	int denom;
} Fraction;

typedef struct 
{
	int width;
	int height;
} Rectangle;

Interval Interval_add(Interval interval1, Interval interval2);

Fraction Fraction_add(Fraction fraq1, Fraction fraq2);

Rectangle Rectangle_add(Rectangle rectangle1, Rectangle rectangle2);

#endif