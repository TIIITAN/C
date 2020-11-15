#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char *name;
} person;

int main(void) {
    // declare a new struct
    person eleve;

    // set some data
    eleve.age = 18;
    eleve.name = malloc(7 * sizeof(char));
    strcpy(eleve.name, "Titouan");

    // create a pointer to struct
    person *eleve_ptr = &eleve;

    // set some data, again
    (*eleve_ptr).age = 19;
    (*eleve_ptr).name = realloc((*eleve_ptr).name, 8 * sizeof(char));
    strcpy((*eleve_ptr).name, "Titouan!");

    // set some data, again, but with better syntax
    eleve_ptr->age = 20;
    eleve_ptr->name = realloc(eleve_ptr->name, 9 * sizeof(char));
    strcpy(eleve_ptr->name, "Titouan!!");
}
