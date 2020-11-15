#include <stdio.h>
#include <stdlib.h>

/*
	sizeof(<donnee>)					 : retourne la taille en octets d'une donnée
	malloc(<taille en octets>)			 : allouee une zone de mémoire
	calloc(<donnee>, <taille en octets>) : alloue et initialise tout à 0
	free(<donnee allouee>)				 : libère la mémoire allouée
*/

int
main(void)
{
	int nombreJoueurs = 0;
	int *liste_joueurs = NULL;
	int i;

	printf("Combien de joueurs ? ");
	scanf("%d", &nombreJoueurs);

	liste_joueurs = malloc(nombreJoueurs * sizeof(int));

	if(liste_joueurs == NULL)
		exit(1);

	for(i=0 ; i < nombreJoueurs ; i++)
	{
		printf("Joueur %d -> numero %d\n", i+1, i*3);
		liste_joueurs[i] = i*3;
	}

	for(i=0 ; i < nombreJoueurs ; i++)
	{
		printf("[%d]", liste_joueurs[i]);
	}

	free(liste_joueurs);

	return 0;
}
