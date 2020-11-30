#ifndef UTILS
#define UTILS

typedef struct
{
  double x;
  double y;
  double z;
} triple;

triple tripleAddition(triple a, triple b);
triple tripleSoustraction(triple a, triple b);
triple tripleMultiplication(triple a, triple b);
triple tripleDivision(triple a, triple b);

triple tripleSetTo(double u, double v, double w);
triple tripleToZero(void);
triple tripleTimesDouble(triple a, double k);
triple tripleByDouble(triple a, double k);

void tripleDisplay(triple a);

#endif
