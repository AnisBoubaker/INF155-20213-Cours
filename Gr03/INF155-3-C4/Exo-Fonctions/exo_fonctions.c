/*
Exercice: Fonction qui retourne le max parmi 5 entiers
Auteur: INF155-03
Date: 22 sept. 2021
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
Trouve le maxiumum parmi 5 entiers >0
Parametres: 
v1, v2, v3, v4, v5: Les 5 entiers prmi lesquel on cherche le max
Retour: La valeur maximale parmi les 5 entiers ou FAUX si au moins un entier est <=0 
*/
int val_max(int v1, int v2, int v3, int v4, int v5);

int main(void)
{
	int v1 = 10, v2 = 50, v3=12, v4=100, v5=40;
	int le_max;
	

	int saisie;

	do
	{
		printf("Saisir une val. entre 0 et 10: ");
		scanf("%d", &saisie);
	} while (saisie < 0 || saisie > 10);



	//Typiquement, i, j, k, l sont des identifiant
	// de compteur de boucle
	//int i; 

	for (int i = 0; i < 10; ++i)
	{
		//i ne sera visible que dans la boucle
		printf("Je suis fatiguant %d fois!\n", i);
	}

	//Ici la variable i n'existe pas!!

	le_max = val_max(v1, v2, v3, v4, v5);

	if ( le_max )
	{
		printf("La valeur maximale est: %d\n", le_max);
	}
	else
	{
		printf("Erreur dans les parametres!\n");
	}


	system("pause");
	return 0;
}


int val_max(int v1, int v2, int v3, int v4, int v5)
{
	int max = v1;

	if (v1 < 0 || v2 < 0 || v3 < 0 || v4 < 0 || v5 < 0)
	{
		return 0;
	}
	max = v2 > max ? v2 : max;
	max = v3 > max ? v3 : max; 
	max = v4 > max ? v4 : max;
	max = v5 > max ? v5 : max;


	/*if (v2 > max)
	{
		max = v2;
	}
	if (v3 > max)
	{
		max = v3;
	}
	if (v4 > max)
	{
		max = v4;
	}
	if (v5 > max)
	{
		max = v5;
	}*/
	return max;
}