/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max; //Plus grand terme de la sommne
	int compteur = 1; 
	int somme; 

	printf("Quel est le dernier terme? : ");
	scanf("%d", &max);

	somme = 0;
	while (compteur <= max)
	{
		somme = somme + compteur;
		compteur++;
	}

	printf("La somme est: %d\n", somme);

	system("pause");
	return EXIT_SUCCESS;
}