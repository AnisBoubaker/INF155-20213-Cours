
#include "tab2d.h"


void afficher_tab2d(int tab[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
	for (int ligne = 0; ligne < nb_lignes; ligne++)
	{
		for (int colonne = 0; colonne < nb_colonnes; colonne++)
		{
			printf("%d\t", tab[ligne][colonne]);
		}
		printf("\n");
	}
}

void moyenne_temperatures(double temperatures[][MAX_COLS], int nb_lignes, int nb_cols,
	double moyennes[])
{
	double somme = 0;

	for (int i = 0; i < nb_lignes; i++)
	{
		moyennes[i] = moyenne_tab1d(temperatures[i], nb_cols);

		/*
		somme = 0;
		for (int j = 0; j < nb_cols; j++)
		{
			somme += temperatures[i][j];
		}
		moyennes[i] = somme / nb_cols;*/
	}
}


double moyenne_tab1d(double tab[], int taille)
{
	double somme = 0;
	for (int i = 0; i < taille; i++)
	{
		somme += tab[i];
	}
	return somme / taille;
}