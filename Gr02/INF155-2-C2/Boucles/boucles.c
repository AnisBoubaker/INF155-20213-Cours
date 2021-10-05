/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int compteur; 

	compteur = 0;
	while (compteur < 10)
	{
		printf("Je suis fatiguant!\n");
		compteur++;
	}

	system("pause");
	return EXIT_SUCCESS;
}