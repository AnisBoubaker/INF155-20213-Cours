

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"
#include "mod_machine.h"

int main(void)
{
	/*t_date d1; 
	d1.jour = 21; 
	d1.mois = JANVIER;
	d1.annee = 2021;

	printf("La date est: %d-%d-%d\n", d1.jour, d1.mois, d1.annee);*/

	t_machine* machines[1000];



	machines[0] = machine_init("ABC345");
	date_set_date(&(machines[0]->date_mise_service), 21, JUILLET, 2020);
	date_set_date(&(machines[0]->date_maintenance), 15, AOUT, 2020);

	machines[1] = machine_init("DEF456");
	date_set_date(&(machines[1]->date_mise_service), 15, JANVIER, 2020);
	date_set_date(&(machines[1]->date_maintenance), 16, FEVRIER, 2020);

	machines[2] = machine_init("WER345");
	date_set_date(&(machines[2]->date_mise_service), 10, MARS, 2020);
	date_set_date(&(machines[2]->date_maintenance), 31, MARS, 2020);

	machines[3] = machine_init("DEF456");
	date_set_date(&(machines[3]->date_mise_service), 29, AVRIL, 2020);
	date_set_date(&(machines[3]->date_maintenance), 10, MAI, 2020);

	machines[4] = machine_init("DEF456");
	date_set_date(&(machines[4]->date_mise_service), 15, JUILLET, 2020);
	date_set_date(&(machines[4]->date_maintenance), 30, AOUT, 2020);

	for (int i = 0; i < 5; i++)
	{
		machine_afficher(machines[i]);
	}
	
	t_date date_min; 
	t_machine** liste_a_maintenir; 
	date_set_date(&date_min, 1, AVRIL, 2020);
	int nb_a_maintenir; 

	liste_a_maintenir = machines_a_maintenir(machines, 5, date_min, &nb_a_maintenir);
	printf("LISTE DES MACHINES A MAINTENIR: \n");
	for (int i = 0; i < nb_a_maintenir; i++)
	{
		machine_afficher(liste_a_maintenir[i]);
	}

	system("pause");
	return EXIT_SUCCESS;
}