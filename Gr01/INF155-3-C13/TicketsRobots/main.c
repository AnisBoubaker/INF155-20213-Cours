

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"
#include "mod_machine.h"


int main(void)
{

	t_machine* liste_machines[1000];

	liste_machines[0] = machine_init("MODELE1");
	liste_machines[1] = machine_init("MODELE2");
	liste_machines[2] = machine_init("MODELE3");
	liste_machines[3] = machine_init("MODELE1");
	liste_machines[4] = machine_init("MODELE5");


	date_set_date(&(liste_machines[0]->date_mise_service), 11, JANVIER, 2021);
	date_set_date(&(liste_machines[1]->date_mise_service), 11, FEVRIER, 2021);
	date_set_date(&(liste_machines[2]->date_mise_service), 15, JANVIER, 2021);
	date_set_date(&(liste_machines[3]->date_mise_service), 30, MAI, 2021);
	date_set_date(&(liste_machines[4]->date_mise_service), 25, JUIN, 2021);

	date_set_date(&(liste_machines[0]->date_maintenance), 31, JANVIER, 2021);
	date_set_date(&(liste_machines[1]->date_maintenance), 5, MARS, 2021);
	date_set_date(&(liste_machines[2]->date_maintenance), 10, FEVRIER, 2021);
	date_set_date(&(liste_machines[3]->date_maintenance), 10, JUIN, 2021);
	date_set_date(&(liste_machines[4]->date_maintenance), 5, JUILLET, 2021);

	/*for (int i = 0; i < 5; i++)
	{
		machine_afficher(liste_machines[i]);
	}*/

	t_machine** a_maintenir; 
	t_date date_referemce; 
	int nb_a_maintenir; 

	date_set_date(&date_referemce, 1, JUIN, 2021);
	a_maintenir = machines_a_maintenir(liste_machines, 5, date_referemce, &nb_a_maintenir);

	for (int i = 0; i < nb_a_maintenir; i++)
	{
		machine_afficher(a_maintenir[i]);
	}




	/*t_date date1;

	date1.jour = 0; 
	date1.mois = 0;
	date1.annee = 0; 

	if (date_set_date(&date1, 30, FEVRIER, 2021))
	{
		printf("%d-%d-%d\n", date1.jour, date1.mois, date1.annee);
	}
	else {
		printf("Date invalide!\n");
	}

	t_machine* m1; 
	t_machine* m2;

	m1 = machine_init("WSR5645");
	m2 = machine_init("EWS8978");

	printf("Numero de m1: %d\n", m1->num);
	printf("Numero de m2: %d\n", m2->num);*/
	

	system("pause");
	return 0;

}