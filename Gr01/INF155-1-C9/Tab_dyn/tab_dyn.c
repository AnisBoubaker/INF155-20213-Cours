
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int* fibo(int nb_termes)
{
	int* termes;

	termes = (int*)malloc(sizeof(int) * nb_termes);
	if (termes == NULL)
	{
		printf("Plus de memoire!\n");
		
		//RAPPEL: Ne pas faire ça!!
		//return EXIT_FAILURE;

		exit(EXIT_FAILURE);
	}


	termes[0] = 0; 
	termes[1] = 1;

	for (int i = 2; i < nb_termes; i++)
	{
		termes[i] = termes[i - 1] + termes[i - 2];
	}

	return termes;
}


int main(void)
{
	int* termes_fibo;

	termes_fibo = fibo(1000000000);

	for (int i = 0; i < 15; i++)
	{
		printf("%d ", termes_fibo[i]);
	}
	printf("\n");

	free(termes_fibo);
	termes_fibo = NULL;


	system("pause");
	return 0;
}