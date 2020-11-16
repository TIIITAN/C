#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "myutils.h"

int main(void)
{
	const char *prenom="Nicolas";
    const char *nom="Mathieu";
    const char *serveur="ENIB.FR";
    char adresse_mail[100];

    strcpy(adresse_mail, "");

    strcat(adresse_mail, prenom);
    strcat(adresse_mail, ".");
    strcat(adresse_mail, nom);
    strcat(adresse_mail, "@");
    strcat(adresse_mail, serveur);

    printf("%s\n", adresse_mail);

    to_lower(adresse_mail);

    printf("%s\n", adresse_mail);

    if (strcmp(adresse_mail, "nicolas.mathieu@enib.fr")==0)
  	{
		printf("COMPARAISON OK.\n");
 	}
  	else
  	{
	  	printf("COMPARAISON NOK.\n");
  	}

    printf("-------------------------------------------------\n");

    const char titre[] = "Notes du semestre";
    double notes[]={ 7.5, 10, 8, 12.5, 13, 11, 5.5, 16.5, 6, 9.5};
    int size = sizeof(notes)/sizeof(notes[0]);

   	display_note(titre, notes, size);

   	printf("Moyenne : %f\n", average(notes, size));

   	printf("Notes au dessus de la moyenne : %d\n", count_notes_above_average(notes, size));

   	printf("-------------------------------------------------\n");

   	double notes_above[4];
   	int size_notes_above = sizeof(notes_above)/sizeof(notes_above[0]);

   	int nb = copy_notes_above_average(notes, size, notes_above, size_notes_above);

   	printf("nb : %d\n", nb);
   	display_note("Tableau notes au dessus de la moyenne", notes_above, nb);

   	printf("-------------------------------------------------\n");

   	double *tableau_final;
   	int capacity;

   	tableau_final = allocate_notes_above_average(notes, size, &capacity);

   	display_note("Tableau final", tableau_final, capacity);

   	free(tableau_final);

	return 0;
}