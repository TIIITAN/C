#ifndef SPACE
#define SPACE

#include "object.h"
#include <stdbool.h>

typedef struct
{
  double friction_coef;
  object *list_objects;
  int nb_objects;
  bool gravity;
} space;

void spaceUpdate(space *s, double dt);

#endif
