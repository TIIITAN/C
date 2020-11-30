#include <Windows.h>
#include <direct.h>

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "utils.h"
#include "object.h"
#include "space.h"

void test_utils(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);

  triple p1 = tripleSetTo(3,4,5);
  triple p2 = tripleSetTo(6.1,-5.8,10.9);

  triple p3;

  p3 = tripleAddition(p1, p2);
  printf("Addition ");
  tripleDisplay(p3);

  p3 = tripleSoustraction(p1, p2);
  printf("Soustraction ");
  tripleDisplay(p3);

  p3 = tripleMultiplication(p1, p2);
  printf("Multiplication ");
  tripleDisplay(p3);

  p3 = tripleDivision(p1, p2);
  printf("Division ");
  tripleDisplay(p3);

  p3 = tripleToZero();
  printf("ToZero ");
  tripleDisplay(p3);
}

void test_object(double dt)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);

  object Balle;

  Balle.mass = 1;
  Balle.position = tripleSetTo(1,2,3);
  Balle.velocity = tripleSetTo(-3,2,5);
  Balle.acceleration = tripleSetTo(1,2,0);

  int wanted_iterations = 10;

  for (int i = 0 ; i < wanted_iterations ; i++) {
    objectUpdate(&Balle, dt);
    objectDisplayInfo(&Balle);
  }

}

void test_space(double dt)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);

  object Balle1;

  Balle1.mass = 1;
  Balle1.position = tripleSetTo(1,2,3);
  Balle1.velocity = tripleSetTo(-3,2,5);
  Balle1.acceleration = tripleSetTo(1,2,0);

  object Balle2;

  Balle2.mass = 1;
  Balle2.position = tripleSetTo(-1,5,2);
  Balle2.velocity = tripleSetTo(5,4,6);
  Balle2.acceleration = tripleSetTo(0,1,4);

  space espace;

  espace.friction_coef = 0.99;
  espace.nb_objects = 2;

  espace.list_objects =(object *)malloc((size_t)espace.nb_objects*sizeof(object));
  if(!espace.list_objects)
  {
    abort();
  }

  espace.list_objects[0] = Balle1;
  espace.list_objects[1] = Balle2;

  espace.gravity = true;

  int wanted_iterations = 10;

  for (int i = 0 ; i < wanted_iterations ; i++) {
    spaceUpdate(&espace, dt);
    for(int j = 0 ; j < espace.nb_objects ; j++) {
      printf("Balle%d\n", j+1);
      objectDisplayInfo(&(espace.list_objects[j]));
    }
  }

  free(espace.list_objects);
}

int main(int argc, char const *argv[]) {

  int TPS = 20; //ticks per second
  double dt = 1.0/(double)TPS;

  test_utils();

  test_object(dt);

  test_space(dt);

  return 0;
}
