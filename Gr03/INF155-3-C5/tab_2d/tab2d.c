

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_COLONNES_MAX 100

int main(void)
{
	int tab_2d[5][NB_COLONNES_MAX] = { {10, 3, 5} , {5, 6, 7, 10}, {12, 8} };

	int tab_petit[5][3] = { {10, 3, 4}, {3, 5, 7}, {10, 12, 3} };

	for (int ligne = 0; ligne < 5; ligne++)
	{
		for (int colonne = 0; colonne < 6; colonne++)
		{
			printf("%d\t", tab_2d[ligne][colonne]);
		}
		printf("\n");
	}

	printf("La somme des éléments: %d\n", somme_tab2d(tab_2d, 5, 6));

	printf("La somme des éléments: %d\n", somme_tab2d(tab_petit, 3, 3));


	system("pause");
	return 0;
}

int somme_tab2d(int tab[][NB_COLONNES_MAX], int nb_lignes, int nb_colonnes)
{
	int somme = 0; 
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			somme += tab[i][j];
		}
	}
	return somme;
}