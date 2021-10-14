/*
Illustration des boucles 
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x; 

	x = 10; 

	while (x < 20)
	{
		printf("Je suis fatiguant!\n");
		printf("vraiment fatiguant!\n");
		x++;
	}


	system("pause");
	return EXIT_SUCCESS;
}