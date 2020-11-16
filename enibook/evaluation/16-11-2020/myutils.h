#ifndef POINTERS
#define POINTERS

void to_lower(char* str);

void display_note(const char *titre, double *table, int size);

double average(double *table, int size);

int count_notes_above_average(double *table, int size);

int copy_notes_above_average(double *table1, int size1, double *table2, int size2);

double *allocate_notes_above_average(double *table, int size, int *capa);

#endif