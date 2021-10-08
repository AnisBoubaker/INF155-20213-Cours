
#include "mod2d.h"

void moyenne_temperatures(double mesures[][LECTURES_MAX], int nb_lignes, int nb_colonnes, double moyennes[])
{
	double moyenne = 0;
	for (int i = 0; i < nb_lignes; i++)
	{
		/*moyenne = 0;
		for (int j = 0; j < nb_colonnes; j++)
		{
			moyenne += mesures[i][j];
		}
		moyenne = moyenne / nb_colonnes;
		moyennes[i] = moyenne;*/
		moyennes[i] = moyenne_tab1d(mesures[i], nb_colonnes);

	}

}

double moyenne_tab1d(double mesures[], int taille)
{
	double moyenne = 0;

	for (int i = 0; i < taille; i++)
	{
		moyenne += mesures[i];
	}

	return moyenne / taille;
}

void afficher_tab2d(double tab[][LECTURES_MAX], int lignes, int colonnes)
{
	for (int i = 0; i < lignes; i++)
	{
		for (int j = 0; j < colonnes ;  j++)
		{
			printf("%lf\t", tab[i][j]);
		}
		printf("\n");
	}
}