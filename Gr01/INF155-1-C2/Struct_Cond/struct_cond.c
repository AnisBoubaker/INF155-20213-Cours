/*
Programme qui illustre l'utilisation de structures conditionnelles
Auteur: Anis Boubaker
Date: 2021-09-13
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saisie; 

	printf("Saisir une valeur <100: ");
	scanf("%d", &saisie);

	if (saisie < 100) 
	{
		printf("Merci vous avez bien respecte la consigne!\n");
		printf("Vous etes une personne tres docile!\n");
	}
	/*else
	{
		printf("Vous n'etes pas capable de respecter une instruction simple!\n");
	}*/

	system("pause");
	return EXIT_SUCCESS;
}