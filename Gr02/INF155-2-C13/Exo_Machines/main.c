

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"

int main(void)
{
	t_date d1; 

	d1.jour = 21; 
	d1.mois = JANVIER;
	d1.annee = 2021;

	printf("La date est: %d-%d-%d\n", d1.jour, d1.mois, d1.annee);



	system("pause");
	return EXIT_SUCCESS;
}