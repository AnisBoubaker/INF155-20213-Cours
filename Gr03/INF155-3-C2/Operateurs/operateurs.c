/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int x; 
	
	printf("Saisir un entier: ");
	scanf("%d", &x);
	
	if (x == 0)
	{
		printf("Vous avez saisi 0!\n");
	}


	/*int x; 
	int y; 
	x = 11; 

	//++x;

	y = x++ / 4;

	printf("y contient: %d\n", y);
	printf("x contient: %d\n", x);

	*/

	/*double x; 
	int y, z; 
	y = 3.0;
	z = 1;
	x = (double)z / y;

	printf("x contient: %lf\n", x);

	printf("Le reste de 10/3 = %d\n", 10 % 3);*/

	system("pause");
	return EXIT_SUCCESS;
}