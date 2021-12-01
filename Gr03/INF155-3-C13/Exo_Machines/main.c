

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"
#include "mod_machine.h"


int main(void)
{

	t_date d1; 
	t_date d2;

	t_machine* liste_machines[1000];


	d1.jour = 21;
	d1.mois = JUILLET;
	d1.annee = 2021;

	d2.jour = 21; 
	d2.mois = JUILLET;
	d2.annee = 2021; 

	printf("La date: %d-%d-%d\n", d1.jour, d1.mois, d1.annee);

	printf("Valeur de la comparaison: %d\n", date_cmp(d1, d2) );

	liste_machines[0] = machine_init("ABC345");
	date_set_date(&(liste_machines[0]->date_mise_service), 21, FEVRIER, 2021);
	date_set_date(&(liste_machines[0]->date_maintenance), 15, MARS, 2021);

	liste_machines[1] = machine_init("DEF678");
	date_set_date(&(liste_machines[1]->date_mise_service), 1, MARS, 2021);
	date_set_date(&(liste_machines[1]->date_maintenance), 15, AOUT, 2021);

	liste_machines[2] = machine_init("AGF567");
	date_set_date(&(liste_machines[2]->date_mise_service), 10, JANVIER, 2021);
	date_set_date(&(liste_machines[2]->date_maintenance), 3, FEVRIER, 2021);

	liste_machines[3] = machine_init("GHJ134");
	date_set_date(&(liste_machines[3]->date_mise_service), 1, JUILLET, 2021);
	date_set_date(&(liste_machines[3]->date_maintenance), 15, JUILLET, 2021);

	liste_machines[4] = machine_init("UIY986");
	date_set_date(&(liste_machines[4]->date_mise_service), 18, JUILLET, 2021);
	date_set_date(&(liste_machines[4]->date_maintenance), 30, AOUT, 2021);

	for (int i = 0; i < 5; i++)
	{
		machine_afficher(liste_machines[i]);
	}


	t_machine** tab_maintenance;
	int nb_a_maintenir; 
	t_date date_ref;

	date_set_date(&date_ref, 1, JUIN, 2021);

	tab_maintenance = machines_a_maintenir(liste_machines, 5, date_ref, &nb_a_maintenir);

	printf("\n\n---Liste des machines à maintenir: --- \n");
	for (int i = 0; i < nb_a_maintenir; i++)
	{
		machine_afficher(tab_maintenance[i]);
	}



	system("pause");
	return EXIT_SUCCESS;
}