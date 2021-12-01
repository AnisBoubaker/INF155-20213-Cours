

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"


int main(void)
{

	t_date d1; 
	t_date d2;

	d1.jour = 21;
	d1.mois = JUILLET;
	d1.annee = 2021;

	d2.jour = 21; 
	d2.mois = JUILLET;
	d2.annee = 2021; 

	printf("La date: %d-%d-%d\n", d1.jour, d1.mois, d1.annee);

	printf("Valeur de la comparaison: %d\n", date_cmp(d1, d2) );


	system("pause");
	return EXIT_SUCCESS;
}