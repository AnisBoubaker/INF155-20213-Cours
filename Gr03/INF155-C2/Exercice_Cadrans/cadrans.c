/*
Exercice cadrans

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int x, y; //Coordonnées saisies par l'usager
	int cadran; //Cadran où se trouve le point saisi

	printf("Saisir l'abscisse: ");
	scanf("%d", &x);

	printf("Saisir l'ordonnee: ");
	scanf("%d", &y);
	/*
	if (x > 0)
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
	//On suppose : x = 100 et y = 50
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


	printf("Le point se trouve dans le cadran: %d\n", cadran);

	system("pause");
	return EXIT_SUCCESS;
}