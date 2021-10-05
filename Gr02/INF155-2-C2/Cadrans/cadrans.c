/*
Exercice: Cadrans
Auteur: 
Date: 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double x, y; //Coordonnées saisies par l'usager
	int cadran; //Cadran où se trouve le point saisi

	printf("x = ");
	scanf("%lf", &x);

	printf("y = ");
	scanf("%lf", &y);

	if (x > 0 && y > 0)
	{
		cadran = 1;
	}
	else if (x>0 && y < 0) 
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
			cadran = 3;
		}
		else
		{
			cadran = 4; 
		}
	}*/

	printf("Le point se situe dans le cadran %d\n", cadran);

	system("pause");
	return EXIT_SUCCESS;
}