/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mod2d.h"

#define MAX_NB_JOURS 100


int main(void)
{
	double mesures[MAX_NB_JOURS][LECTURES_MAX]= {
		{25.5, 26, 28, 25, 32, 10},
		{27.3, 27, 25, 29, 30, 12},
		{26.3, 33, 28, 31, 19, 10}
	};
	double moyennes[MAX_NB_JOURS];

	moyenne_temperatures(mesures, 3, 6, moyennes);

	for (int i = 0; i < 3; i++)
	{
		printf("Moyenne du jour %d: %lf\n", i, moyennes[i]);
	}

	afficher_tab2d(mesures, 3, 6);

	system("pause");
	return 0;
}

