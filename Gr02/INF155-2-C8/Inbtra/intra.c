/*

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nb; 

	do {
		printf("Saisir une valeur entre 1 et 20: ");
		scanf("%d", &nb);
	} while (nb <= 1 || nb >= 20);

	printf("\t");
	for (int i = 1; i <= nb; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");

	for (int i = 1; i <= nb; i++)
	{
		printf("%d\t", i);
		for (int j = 1; j <= nb - i; j++)
		{
			printf("\t");
		}
		for (int j = nb-i+1; j <= nb; j++)
		{
			printf("%d\t", i*j);
		}
		
		printf("\n");
	}

	system("pause");
	return 0; 
}
