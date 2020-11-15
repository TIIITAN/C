#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "text.h"

void
test_cut(void)
{
  printf("\n~~~~ %s() ~~~~\n", __func__);
  
  char text1[128];
  char text2[128];
  char text3[128];
  char chr1 = 'K';
  char chr2 = 'O';
  char chr3[] = "bien";

  strcpy(text1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

  printf("%s\n\n", text1);
  cutAtFirstChar(text1, chr1);
  printf("%s\n\n", text1);

  strcpy(text2, "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ");

  printf("%s\n\n", text2);
  cutAtLastChar(text2, chr2);
  printf("%s\n\n", text2);

  strcpy(text3, "On s'amuse bien avec l'alphabet !");

  printf("%s\n\n", text3);
  cutAtWord(text3, chr3);
  printf("%s\n\n", text3);
}

int main(void)
{
	test_cut();

	return 0;
}