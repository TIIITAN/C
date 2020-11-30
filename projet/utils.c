#include <stdio.h>

#include "utils.h"

triple tripleAddition(triple a, triple b)
{
  triple result;

  result.x = a.x + b.x;
  result.y = a.y + b.y;
  result.z = a.z + b.z;

  return result;
}

triple tripleSoustraction(triple a, triple b)
{
  triple result;

  result.x = a.x - b.x;
  result.y = a.y - b.y;
  result.z = a.z - b.z;

  return result;
}

triple tripleMultiplication(triple a, triple b)
{
  triple result;

  result.x = a.x * b.x;
  result.y = a.y * b.y;
  result.z = a.z * b.z;

  return result;
}

triple tripleDivision(triple a, triple b)
{
  triple result;

  result.x = a.x / b.x;
  result.y = a.y / b.y;
  result.z = a.z / b.z;

  return result;
}

triple tripleSetTo(double u, double v, double w)
{
  triple a;

  a.x = u;
  a.y = v;
  a.z = w;

  return a;
}

triple tripleToZero(void)
{
  return tripleSetTo(0,0,0);
}

triple tripleTimesDouble(triple a, double k)
{
  triple triple_k = tripleSetTo(k,k,k);

  return tripleMultiplication(a, triple_k);
}

triple tripleByDouble(triple a, double k)
{
  triple triple_k = tripleSetTo(k,k,k);

  return tripleDivision(a, triple_k);
}

void tripleDisplay(triple a)
{
  printf("(%f, %f, %f)\n", a.x, a.y, a.z);
}
