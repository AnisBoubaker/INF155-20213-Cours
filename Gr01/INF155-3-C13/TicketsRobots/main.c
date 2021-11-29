

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"
#include "mod_machine.h"


int main(void)
{
	t_date date1;

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

	/******************/
	t_machine* m1; 
	t_machine* m2;

	m1 = machine_init("WSR5645");
	m2 = machine_init("EWS8978");

	printf("Numero de m1: %d\n", m1->num);
	printf("Numero de m2: %d\n", m2->num);
	

	system("pause");
	return 0;

}