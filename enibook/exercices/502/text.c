#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "text.h"

void cutAtFirstChar(char *str, char c)
{
	str[(int)strlen(str) - (int)strlen(strchr(str, (int)c))]='\0';
}

void cutAtLastChar(char *str, char c)
{
	str[(int)strlen(str) - (int)strlen(strrchr(str, (int)c))]='\0';
}

void cutAtWord(char *str, const char *word)
{
	str[(int)strlen(str) - (int)strlen(strstr(str, word))]='\0';
}