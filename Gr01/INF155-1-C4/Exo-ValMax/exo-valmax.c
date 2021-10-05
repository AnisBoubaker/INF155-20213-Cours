/*
Écrire la fonction *val_max* qui reçoit cinq entiers <u>strictement positifs</u> et retourne:

- Le maximum des cinq entiers si tous les entiers sont strictement positifs;
- Une valeur fausse si au moins un des entiers reçus n'est pas strictement positif.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int val_max(int v1, int v2, int v3, int v4, int v5);

int main(void)
{
	int le_max;
	int somme=0; 
	int terme_max;

	le_max = val_max(100, 34, 56, 234, 90);
	if ( le_max )
	{
		printf("La valeur max: %d\n", le_max);
	}
	else
	{
		printf("Les parametres sont incorrects!\n");
	}

	//Lire le terme max
	do
	{
		printf("Saisir une valeur >0: ");
		scanf("%d", &terme_max);
	} while (terme_max <= 0);

	//Calculer la somme des termes
	for (int i = 0; i <= terme_max; i++)
	{
		somme += i; 
	}

	


	printf("La somme vaut: %d\n", somme);


	system("pause");
	return EXIT_SUCCESS;
}

int val_max(int v1, int v2, int v3, int v4, int v5)
{
	int resultat = v1; 
	
	if (v1 <= 0 || v2 <= 0 || v3 <= 0 || v4 <= 0 || v5 < 0)
	{
		return 0;
	}

	resultat = v2 > resultat ? v2 : resultat;
	resultat = v3 > resultat ? v3 : resultat;
	resultat = v4 > resultat ? v4 : resultat;
	resultat = v5 > resultat ? v5 : resultat;
	/*
	if (v3 > resultat)
	{
		resultat = v3;
	}
	if (v4 > resultat)
	{
		resultat = v4;
	}
	if (v5 > resultat)
	{
		resultat = v5;
	}*/
	return resultat; 
}