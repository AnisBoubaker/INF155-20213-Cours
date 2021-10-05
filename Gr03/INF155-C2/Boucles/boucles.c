/*

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

	int saisie = -1; 
	while (!(saisie >=0 && saisie<=100))
	{
		printf("Saisir une valeur dans [0..100]: ");
		scanf("%d", &saisie);
	}


	/*int compteur; 

	compteur = 0;
	while (compteur < 10)
	{
		printf("Je suis fatiguant!\n");
		compteur++;
	}*/
	

	system("pause");
	return EXIT_SUCCESS;
}