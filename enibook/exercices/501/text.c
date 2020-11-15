#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "text.h"

void showSpaces(char *str, char marker)
{
	for(int i = 0 ; i < (int)strlen(str) ; i++)
	{
		if(isspace((int)str[i]))
			str[i] = (int)marker;
	}
}

void clearPunctuation(char *str, char placeholder)
{
	for(int i = 0 ; i < (int)strlen(str) ; i++)
	{
		if(ispunct((int)str[i]))
			str[i] = (int)placeholder;
	}
}

void onlyLetters(char *str, char blank)
{
	for(int i = 0 ; i < (int)strlen(str) ; i++)
	{
		if(!( (islower((int)str[i])) || (isupper((int)str[i])) ))
			str[i] = (int)blank;
	}
}