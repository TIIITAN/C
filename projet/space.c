#include "space.h"
#include "object.h"
#include "utils.h"

void spaceUpdate(space *s, double dt)
{
  triple g = tripleSetTo(0,0,-9.81*dt);
  for (int i = 0; i < s->nb_objects; i++) {
    if(s->gravity)
      objectApplyForce(&(s->list_objects[i]), g);

    s->list_objects[i].acceleration = tripleTimesDouble(s->list_objects[i].acceleration, (s->friction_coef)*dt);

    objectUpdate(&(s->list_objects[i]), dt);
  }
}
