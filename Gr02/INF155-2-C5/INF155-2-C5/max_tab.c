/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 50
#define PI 3.14


double max_tab(double tab[], int nb_elts);


void doubler_tab(int tab[], int nb_elts)
{
	for (int i = 0; i < nb_elts; i++)
	{
		tab[i] = tab[i] * 2;
	}
}


/*
Trouve tous les positifs du tableau tab et les stocke dans
le tableau resultats
ENTREES: 
- tab: tableau d'entiers initial
- taille: taille effective de tab
- resultats: tableau où seront stockés les positifs de tab
RETOUR (entier): La taille effective de resultats.
*/
int pos_tab(const int tab[], int taille, int resultats[])
{
	int compteur = 0;
	for (int i = 0; i < taille; i++)
	{
		if (tab[i] > 0)
		{
			resultats[compteur] = tab[i];
			compteur++;
		}
	}
	return compteur; 
}













int main(void)
{
	const double pi = 3.14;
	double un_tab[TAILLE_MAX] = { -20, 3, 17, 56, 100, 34, 231, 0, -3, 10 };
	double le_max; 
	double moyenne; 

	int tab_entier[10] = { 5, -2, -3, 12, 6, -2, 20 };
	int tab_positifs[10];
	int nb_positifs; 

	nb_positifs = pos_tab(tab_entier, 7, tab_positifs);
	for (int i = 0; i < nb_positifs; i++)
	{
		printf("%d\n", tab_positifs[i]);
	}
	

	/*le_max = max_tab(un_tab, TAILLE_MAX);
	printf("La valeur maximale: %lf\n", le_max);



	moyenne = un_tab[0]; 
	for (int i = 1; i < TAILLE_MAX; i++)
	{
		moyenne += un_tab[i];
	}
	moyenne = moyenne / TAILLE_MAX;
	*/
	system("pause");
	return 0;
}

double max_tab(double tab[], int nb_elts)
{
	double max = tab[0];
	for (int i = 0; i < nb_elts; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}
	return max;
}