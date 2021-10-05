/*

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Lit un entier entre deux bornes
PARAMETRES: 
min (entier): Borne min
min (entier): Borne max
RETOUR: La valeur sasise qui est obligatoirement entre min et max.
*/
int lire_entier(int min, int max);

int main(void)
{
	int saisie; 

	saisie = lire_entier(40, 10);

	printf("Valeur saisie: %d\n", saisie);

	system("pause");
	return EXIT_SUCCESS;
}

int lire_entier(int min, int max)
{
	int saisie;
	int permut;

	if (min > max)
	{
		permut = min; 
		min = max; 
		max = permut;
	}

	saisie = min - 1;

	while (saisie<min || saisie>max)
	{
		printf("Saisir une valeur entre %d et %d: ", min, max);
		scanf("%d", &saisie);
	}

	return saisie;
}