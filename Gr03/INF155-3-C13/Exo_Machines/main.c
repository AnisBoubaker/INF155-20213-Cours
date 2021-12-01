

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"
#include "mod_machine.h"


int main(void)
{

	t_date d1; 
	t_date d2;

	t_machine* m1;


	d1.jour = 21;
	d1.mois = JUILLET;
	d1.annee = 2021;

	d2.jour = 21; 
	d2.mois = JUILLET;
	d2.annee = 2021; 

	printf("La date: %d-%d-%d\n", d1.jour, d1.mois, d1.annee);

	printf("Valeur de la comparaison: %d\n", date_cmp(d1, d2) );

	m1 = machine_init(1, "ABC345");
	date_set_date(&(m1->date_mise_service), 21, FEVRIER, 2021);
	date_set_date(&(m1->date_maintenance), 15, MARS, 2021);

	printf("MACHINE #%d\n", m1->num);
	printf("Modele: %s, Mise en service: %d-%d-%d, Derniere maintenance: %d-%d-%d\n",
		m1->num_modele,
		m1->date_mise_service.jour, m1->date_mise_service.mois, m1->date_mise_service.annee,
		m1->date_maintenance.jour, m1->date_maintenance.mois, m1->date_maintenance.annee
	);

	system("pause");
	return EXIT_SUCCESS;
}