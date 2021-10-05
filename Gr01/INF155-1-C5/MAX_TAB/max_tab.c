/*

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10
#define PI 3.14






double max_tab(double tab[], int taille);
void doubler_tab(double tab[], int taille);

/*
Trouve tous les positifs dans un tableau
ENTREES: 
- tab: Tableau contenant les valeurs
- taille: taille effective du tableau tab
- resultats: Tableau où seront stockées toutes les valeurs positives trouvées
SORTIE (entier): Nombre de valeurs positives trouvées (taille effective du tableau resultats)
*/
int pos_tab(const double tab[], int taille, double resultats[]);

int main(void)
{
	double un_tab[ TAILLE ] = { -100, 23.6, 234.8, -10, -2, 3, -10, -12, -123.5, 19.2};
	double le_max; 
	double moyenne = 0;
	double les_positifs[ TAILLE ];
	int nb_positifs; 

	nb_positifs = pos_tab(un_tab, TAILLE, les_positifs);

	for (int i = 0; i < nb_positifs; i++)
	{
		printf("%lf \n", les_positifs[i]);
	}

	
	/*doubler_tab(un_tab, TAILLE);


	
	le_max = max_tab(un_tab, TAILLE);

	printf("Le maximum: %lf\n", le_max);

	for (int i = 0; i < TAILLE; i++)
	{
		moyenne += un_tab[i];
	}
	moyenne = moyenne / TAILLE;
	printf("La moyenne: %lf\n", moyenne);
	*/
	system("pause");
	return 0;

}

double max_tab(double tab[], int taille)
{
	double max = tab[0]; 

	for (int i = 1; i < taille; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}
	return max;
}


void doubler_int(int a)
{
	int x = 10 ; 

	a = a * 2;

	x = x * 2; 
}

void doubler_tab(double tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = tab[i] * 2;
	}
}


int pos_tab(const double tab[], int taille, double resultats[])
{
	int cpt = 0; 

	for (int i = 0; i < taille; i++)
	{
		if (tab[i] > 0)
		{
			resultats[cpt] = tab[i];
			cpt++;
		}
	}

	return cpt;
}
