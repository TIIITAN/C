#ifndef NEWTYPES
#define NEWTYPES

typedef struct 
{
	int count;
	double *data;
} DataSet;

typedef struct 
{
	int length;
	char *nucleotides;
} Gene;

typedef struct 
{
	int size;
	int *identifiers;
} UserBase;

double DataSet_mean(const DataSet *set);

void DataSet_scale(DataSet *set, int factor);

void Gene_dnaToRna(Gene *set);

int Gene_count(const Gene *set, char nucleotide);

int UserBase_privileged(const UserBase *base);

void UserBase_revoque(UserBase *base);

#endif