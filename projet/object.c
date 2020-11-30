#include <stdio.h>

#include "object.h"
#include "utils.h"

void objectUpdate(object *a, double dt)
{
  a->velocity = tripleAddition(a->velocity, tripleTimesDouble(a->acceleration, dt));

  a->position = tripleAddition(a->position, tripleTimesDouble(a->velocity, dt));
}

void objectApplyForce(object *a, triple force)
{
  a->acceleration = tripleAddition(a->acceleration, tripleByDouble(force, a->mass));
}

void objectDisplayInfo(object *a)
{
  printf("pos(%f, %f, %f) vel(%f, %f, %f) acc(%f, %f, %f)\n",
  a->position.x,
  a->position.y,
  a->position.z,
  a->velocity.x,
  a->velocity.y,
  a->velocity.z,
  a->acceleration.x,
  a->acceleration.y,
  a->acceleration.z);
}
