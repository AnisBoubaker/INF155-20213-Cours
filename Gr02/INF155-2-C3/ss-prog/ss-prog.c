/*

Auteur: INF155-03
Date: 2020-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Retourne un nombre aléatoire dans un intervalle
PARAMETRES: 
min (entier): Borne inférieure de l'intervalle, doit être >0 
max (entier): Borne supérieure de l'intervalle
RETOUR (entier): le nomnbre aléatoire entre min et max.
*/
int nb_aleatoire(int min, int max);
int somme_termes(int min, int max);
int ma_fonction(int une_valeur);

int main(void)
{
	/*int test = 15;
	ma_fonction(test);

	printf("La variable test contient: %d", test);
	*/
	int la_somme;
	
	la_somme = somme_termes(10, 100);

	printf("La somme des termes est: %d\n", la_somme);
	
	system("pause");
	return EXIT_SUCCESS;
}


int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int somme_termes(int min, int max)
{
	int cpt = min;
	int resultat = 0;

	while (cpt <= max)
	{
		resultat += cpt;
		cpt++;
	}
	return resultat;
}

int ma_fonction(int une_valeur)
{
	une_valeur = une_valeur * 10;
}