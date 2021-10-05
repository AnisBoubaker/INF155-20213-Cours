/*
Cadrans
Auteur: 
Date: 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

#include <stdio.h>

int main(void)
{
	double x, y; //Coordonnees saisies par l'usager
	int cadran; //Cadran ou se trouve le point saisi

	printf("Saisir l'abscisse: ");
	scanf("%lf", &x);
	printf("Saisir l'ordonnee: ");
	scanf("%lf", &y);

	if (x > 0 && y > 0)
	{
		cadran = 1;
	}
	else if (x > 0 && y < 0)
	{
		cadran = 2;
	}
	else if (x < 0 && y > 0)
	{
		cadran = 4;
	}
	else
	{
		cadran = 3;
	}


	/*if (x > 0)
	{
		if (y > 0)
		{
			cadran = 1;
		}
		else
		{
			cadran = 2;
		}
	}
	else
	{
		if (y > 0)
		{
			cadran = 4;
		}
		else
		{
			cadran = 3;
		}
	}*/

	printf("Vous etes dans le cadran %d\n", cadran);


	system("pause");
	return EXIT_SUCCESS;
}