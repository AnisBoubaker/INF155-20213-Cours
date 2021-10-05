/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


double moyenne_tab(int tab[], int taille)
{
	int somme = 0;

	for (int i = 0; i < taille; i++)
	{
		somme += tab[i];
	}

	return (double)somme / taille; 
}


int main(void)
{

	int nombre = 50; 
	int valeurs[50];
	int tablo2[10] = { 20, 45465, 23, 45, 67, 76, 45, 34, 10, 20 };
	int somme = 0; 
	double moyenne;
	int nb_valeurs = 0; 
	int saisie; 
	do
	{
		printf("Entrez une valeur: (-1 pour terminer) ");
		scanf("%d", &saisie);
		if (saisie != -1)
		{
			valeurs[nb_valeurs] = saisie;
			nb_valeurs++;
		}
	} while (saisie != -1);

	for (int i = 0; i < nb_valeurs; i++)
	{
		printf("Case %d: %d\n", i, valeurs[i]);
	}


	moyenne = moyenne_tab(valeurs, nb_valeurs);
	printf("La moyenne est de: %lf\n", moyenne);

	printf("La moyenne de tablo2: %lf\n", moyenne_tab(tablo2, 10)  );



	/*
	for (int i = 0; i < nb_valeurs; i++)
	{
		somme += valeurs[i];
	}

	moyenne = (double)somme / nb_valeurs;

	printf("La moyenne: %lf\n", moyenne);*/







	//double notes[40] = {80, 78, 95}; //Initialiser les 3 premières case du tableau
									 //Le reste est initialisé à 0

	/*double notes[40] = {1};

	for (int i = 0; i < 40; i++)
	{
		notes[i] = 10;
	}
	
	for (int i = 0; i < 40; i++)
	{
		printf("La case %d contient: %lf\n",i, notes[i]);
	}*/

	/*printf("La case 10 contient: %lf\n", notes[10]);
	printf("La case 15 contient: %lf\n", notes[15]);
	printf("La case 25 contient: %lf\n", notes[25]);*/
	
	//double toto = 50;

	//printf("toto = %lf\n", toto);
	//notes[2] = 150.5;

	//printf("%lf\n", notes[20]);


	system("pause");
	return 0; 
}