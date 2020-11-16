#include "newTypes.h"

double DataSet_mean(const DataSet *set)
{
	double somme;

	for(int i=0 ; i < set->count ; i++)
		somme += set->data[i];

	return somme/(double)set->count;
}

void DataSet_scale(DataSet *set, int factor)
{
	for(int i=0 ; i < set->count ; i++)
		set->data[i]*=factor;
}

void Gene_dnaToRna(Gene *set)
{
	for(int i=0 ; i < set->length ; i++)
		if(set->nucleotides[i]=='T')
			set->nucleotides[i]='U';
}

int Gene_count(const Gene *set, char nucleotide)
{
	int nb=0;

	for(int i=0 ; i < set->length ; i++)
		if(set->nucleotides[i]==nucleotide)
			nb++;

	return nb;
}

int UserBase_privileged(const UserBase *base)
{
	int nb=0;

	for(int i=0 ; i < base->size ; i++)
		if((0<=base->identifiers[i])&&(base->identifiers[i]<100))
			nb++;

	return nb;
}

void UserBase_revoque(UserBase *base)
{
	for(int i=0 ; i < base->size ; i++)
		if(base->identifiers[i]<100)
			base->identifiers[i]=-1;
}