#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "text.h"

void
test_translate(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  
  char text1[128];
  char text2[128];
  char text3[128];
  char mark1 = '+';
  char mark2 = '-';
  char mark3 = '=';

  strcpy(text1, "Change les espaces, tabulations et\nretours a la ligne.");

  printf("%s\n\n", text1);
  showSpaces(text1, mark1);
  printf("%s\n\n", text1);

  strcpy(text2, "Change les points, virgules et parentheses (ponctuation).");

  printf("%s\n\n", text2);
  clearPunctuation(text2, mark2);
  printf("%s\n\n", text2);

  strcpy(text3, "Change tout sauf les lettres.");

  printf("%s\n\n", text3);
  onlyLetters(text3, mark3);
  printf("%s\n\n", text3);
}

int main(void)
{
	test_translate();

	return 0;
}