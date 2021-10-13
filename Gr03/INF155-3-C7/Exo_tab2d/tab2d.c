/*
Exercice: Écrire une fonction *min_max_tab* qui reçoit un tableau à deux dimensions d'entiers, 
et qui retourne le maximum ET le minimum du tableau.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

void min_max_tab(
	int tab[][TAILLE_MAX],
	int nb_lignes,
	int nb_colonnes,
	double resultats[]);

int main(void)
{
	int tab[3][TAILLE_MAX] = { {10, 20, 30, 50}, {25, 100, 45, 2}, {12, 34, 19, 90} };
	double resultats[3];

	min_max_tab(tab, 3, 4, resultats);

	printf("Le minimum est: %.0lf\n", resultats[0]);
	printf("Le maximum est: %.0lf\n", resultats[1]);
	printf("La moyenne est: %lf\n", resultats[2]);

	system("pause");
	return 0;
}


void min_max_tab(
	int tab[][TAILLE_MAX],
	int nb_lignes,
	int nb_colonnes,
	double resultats[])
{
	int min = tab[0][0];
	int max = tab[0][0];
	double somme = 0;

	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			somme += tab[i][j];
			if (tab[i][j] > max)
			{
				max = tab[i][j];
			}
			else if (tab[i][j] < min)
			{
				min = tab[i][j];
			}
		}
	}
	resultats[0] = min; 
	resultats[1] = max;
	resultats[2] = somme / (nb_lignes * nb_colonnes);
}