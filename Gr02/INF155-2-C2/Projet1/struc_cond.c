/*
Programme qui illustre les structures conditionnelles
Auteur: 
Date: 
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int saisie; //Valeur saisie par l'usager

	printf("Veuillez entrer une valeur inferieur a 100: ");
	scanf("%d", &saisie);

	if (saisie < 100) 
	{
		printf("Bravo! \n");
		printf("Vous etes tres docile.\n\n");
	}
	/*else
	{
		printf("Vous n'etes pas capable de respecter une instruction claire!");
	}*/

	printf("Fin du programme!\n");
	system("pause");
	return EXIT_SUCCESS;
}