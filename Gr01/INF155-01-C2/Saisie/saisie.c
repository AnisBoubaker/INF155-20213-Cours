/*
Programme qui demande la saisie d'une valeur entière
entre 1 et 10. On redemande la saisie tant qu'on 
n'obtient pas une valeur convenable.

Auteur: Anis Boubaker
Date: 2021-09-13
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saisie; //Valeur saisie par l'usager

	saisie = 0;
	while ( saisie<1 || saisie > 10 ) 
	{
		printf("Saisir une valeur entre 1 et 10: ");
		scanf("%d", &saisie);
	}
	printf("Merci!\n");


	system("pause");
	return EXIT_SUCCESS;
}