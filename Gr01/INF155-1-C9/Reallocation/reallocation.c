
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double* tab;
	int* tab2;

	tab = (double*)malloc(sizeof(double) * 50);

	tab2 = (int*)malloc(sizeof(int) * 10);

	/*
	....
	
	*/

	tab = (double*)realloc(tab, sizeof(double) * 70);
	if (tab == NULL)
	{
		printf("Erreur d'allocation memoire.\n");
		exit(EXIT_FAILURE);
	}

	system("pause");
	return 0;
}