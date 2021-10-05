

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double moyenne_tab(double tab[], int taille);

void double_valeur(int val)
{
	val = val * 2;
}

int main(void)
{
	double somme = 0; 
	double valeurs[5] ;
	double moyenne; 
	double saisie; 

	int toto= 10; 

	double_valeur(toto);

	int nb_valeurs = 0;
	do
	{
		printf("Saisir la prochaine valeur: ");
		scanf("%lf", &saisie);
		if (saisie != -1)
		{
			valeurs[nb_valeurs] = saisie;
			nb_valeurs++;
		}
	} while (nb_valeurs<5 && saisie != -1);

	printf("La variable courante = %d\n", nb_valeurs);

	moyenne = moyenne_tab(valeurs, nb_valeurs);
	printf("La moyenne est de: %lf\n", moyenne);


	/*for (int i = 0; i < nb_valeurs; i++)
	{
		somme += valeurs[i];
	}
	
	moyenne = somme / nb_valeurs;*/
	printf("La moyenne: %lf\n", moyenne);

	system("pause");
	return 0;
}


double moyenne_tab(double tab[], int taille)
{
	double somme = 0; 

	for (int i = 0; i < taille; i++)
	{
		somme += tab[i];
	}
	return somme / taille;
}