

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"


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
		printf("Date invalide!");
	}

	

	system("pause");
	return 0;

}