/*
Écrire la fonction *val_max* qui reçoit cinq entiers <u>strictement positifs</u> et retourne:

- Le maximum des cinq entiers si tous les entiers sont strictement positifs;
- Une valeur fausse si au moins un des entiers reçus n'est pas strictement positif.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
*/
int val_max(int v1, int v2, int v3, int v4, int v5);

int main(void)
{
	int max; 
	int somme = 0; 
	int cpt; //Compteur de boucle
	//int i; //i, j , k, l comme compteurs de boucle
	//cpt + cpt + 2

	do
	{
		printf("Saisir une valeur (entre 0 et 400): ");
		scanf("%d", &max);
	} while (max < 0 || max > 400);

	for (int i = 0; i <= 100; i ++) //cpt ++ <==> cpt = cpt+1
	{
		somme += i;
	}
	
	printf("La somme vaut: %d\n", somme);

	/*if (max = val_max(45, -78, 100, 34, 29))
	{
		printf("La valeur maximale: %d\n", max);
	}
	else
	{
		printf("Parametres erronés!\n");
	}*/

	

	system("pause");
	return 0;
}

int val_max(int v1, int v2, int v3, int v4, int v5)
{
	int max = v1; 

	if (v1 <= 0 || v2 <= 0 || v3 <= 0 || v4 <= 0 || v5 <= 0)
	{
		return 0;
	}

	max = max < v2 ? v2 : max;
	max = max < v3 ? v3 : max;
	max = max < v4 ? v4 : max;
	max = max < v5 ? v5 : max;

	/*
	if (max < v2)
	{
		max = v2;
	}
	if (max < v3)
	{
		max = v3;
	}
	if (max < v4)
	{
		max = v4;
	}
	if (max < v5)
	{
		max = v5;
	}*/
	return max;
}
