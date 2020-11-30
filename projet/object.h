#ifndef OBJECT
#define OBJECT

#include "utils.h"

typedef struct
{
  double mass;
  triple position;
  triple velocity;
  triple acceleration;
} object;

void objectUpdate(object *a, double dt);
void objectApplyForce(object *a, triple force);
void objectDisplayInfo(object *a);

#endif
