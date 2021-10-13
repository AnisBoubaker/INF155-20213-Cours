
#include "tableaux.h"


int somme_tab2d(int tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes)
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

/*
�crivez la fonction ***moyenne_temperatures*** qui re�oit un tableau �
deux dimensions de temp�ratures, o� chaque ligne correspond � une journ�e
de mesures (on assume qu'on a le m�me nombre de mesures par jour).
Votre fonction doit "retourner" les moyennes de mesure journali�res.
Dans votre programme principal *main*, affichez l'ensemble des moyennes.
*/
void moyenne_temperatures(double mesures[][TAILLE_MAX],
	int nb_lignes,
	int nb_colonnes,
	double moyennes[])
{

	//double somme = 0; 

	for (int i = 0; i < nb_lignes; i++)
	{
		//somme = 0;
		/*moyennes[i] = 0;
		for (int j = 0; j < nb_colonnes; j++)
		{
			//somme += mesures[i][j];
			moyennes[i] += mesures[i][j];
		}
		moyennes[i] = moyennes[i] / nb_colonnes;*/
		moyennes[i] = moyenne_tab1d(mesures[i], nb_colonnes);
	}
}


double moyenne_tab1d(double tab[], int nb_elts)
{
	double somme = 0;
	for (int i = 0; i < nb_elts; i++)
	{
		somme += tab[i];
	}
	return somme / nb_elts;
}



void afficher_tab2d(double tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes)
{
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			printf("%.2lf\t", tab[i][j]);
		}
		printf("\n");
	}
}