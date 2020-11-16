#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "text.h"

void
test_compare(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  const char *a="good";
  const char *b="bye";
  char s[100];

  bool x;

  strcpy(s, strcat(strcpy(s, a), (char*)b));
  printf("%s\n", s);
  x = isConcat(s, (char*)a, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, a), (char*)a));
  printf("%s\n", s);
  x = isConcat(s, (char*)a, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, b), (char*)a));
  printf("%s\n", s);
  x = isConcat(s, (char*)a, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, b), (char*)b));
  printf("%s\n", s);
  x = isConcat(s, (char*)a, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  printf("-----------------------------------------\n");

  strcpy(s, strcat(strcpy(s, a), (char*)b));
  printf("%s\n", s);
  x = isTwice(s, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, a), (char*)a));
  printf("%s\n", s);
  x = isTwice(s, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, b), (char*)a));
  printf("%s\n", s);
  x = isTwice(s, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, b), (char*)b));
  printf("%s\n", s);
  x = isTwice(s, (char*)b);
  printf("%s\n\n", x ? "true" : "false");

  printf("-----------------------------------------\n");

  strcpy(s, strcat(strcpy(s, a), (char*)b));
  printf("%s\n", s);
  x = isRepetition(s);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, a), (char*)a));
  printf("%s\n", s);
  x = isRepetition(s);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, b), (char*)a));
  printf("%s\n", s);
  x = isRepetition(s);
  printf("%s\n\n", x ? "true" : "false");

  strcpy(s, strcat(strcpy(s, b), (char*)b));
  printf("%s\n", s);
  x = isRepetition(s);
  printf("%s\n\n", x ? "true" : "false");
}

int main(void)
{
	test_compare();

	return 0;
}