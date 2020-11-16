#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "text.h"

bool isConcat(const char *tested, const char *head, const char *tail)
{
	char concat[128];

	strcpy(concat, strcat(strcpy(concat, head), (char*)tail));

	if((int)strlen(tested)!=(int)strlen(concat))
		return false;
	
	for(int i=0 ; i < (int)strlen(tested) ; i++)
		if(tested[i]!=concat[i])
			return false;

	return true;
}

bool isTwice(const char *tested, const char *pattern)
{
	char concat[128];

	strcpy(concat, strcat(strcpy(concat, pattern), (char*)pattern));

	if((int)strlen(tested)!=(int)strlen(concat))
		return false;
	
	for(int i=0 ; i < (int)strlen(tested) ; i++)
		if(tested[i]!=concat[i])
			return false;

	return true;
}

bool isRepetition(const char *tested)
{
	if((int)strlen(tested)%2!=0)
		return false;

	int l = (int)strlen(tested)/2;

	for(int i=0 ; i < l ; i++)
		if(tested[i]!=tested[l+i])
			return false;

	return true;
}