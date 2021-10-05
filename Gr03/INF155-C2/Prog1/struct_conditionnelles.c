/*
Programme qui illustre l'utilisation des structures conditionnelles
avec if. 

Auteur: Anis Boubaker
Date: 2021-09-8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saisie; 

	printf("Veuillez saisir une valeur <100:");
	scanf("%d", &saisie);

	if (saisie < 100) 
	{
		printf("Merci! Valeur saisie: %d\n", saisie);
		printf("Vous etes tres docile!\n");
		printf("Merci encore!\n");
	}
	else
	{
		printf("Vous avez du mal a respecter une instruction simple!\n");
	}
	printf("Le perogramme se termine ici.\n");

	system("pause");
	return EXIT_SUCCESS;
}