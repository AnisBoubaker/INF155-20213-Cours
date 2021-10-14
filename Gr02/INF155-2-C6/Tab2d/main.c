

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"



int main(void)
{
	double mes_mesures[TAILLE_MAX][TAILLE_MAX] = {
		{25.5, 22, 23, 20.3},
		{26.5, 21, 24, 22.3},
		{25.6, 20.5, 22, 21.3}
	};

	double moyennes[TAILLE_MAX];

	moyenne_temperatures(mes_mesures, 3, 4, moyennes);

	for (int i = 0; i < 3; i++)
	{
		printf("%lf\n", moyennes[i]);
	}


	/*int tab1d[10] = { 10, 3, 4, 10 };
	int tab2d[TAILLE_MAX][TAILLE_MAX] = { {5, 3, 2}, {8, 5, 6, 7}, {1, 2, 3} };
	int somme = 0;

	tab2d[3][2] = 20;

	for (int ligne = 0; ligne < 5; ligne++)
	{
		for (int colonne = 0; colonne < 6; colonne++)
		{
			printf("%lf\t", tab2d[ligne][colonne]);
		}
		printf("\n");
	}*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			somme += tab2d[i][j];
		}
	}*/

	/*somme = somme_tab2d(tab2d, 5, 6);

	printf("La somme des éléments: %d\n", somme);*/

	system("pause");
	return 0;
}


