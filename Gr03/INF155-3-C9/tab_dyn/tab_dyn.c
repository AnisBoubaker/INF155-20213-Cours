
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int* calculer_fibo(int nb_termes)
{
	//int termes[1000];

	int* termes; 

	termes = (int*)malloc(nb_termes* sizeof(int));
	if (termes == NULL)
	{
		printf("Erreur d'allocation!");
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
	int nb_termes;
	int* termes_fibo;
	
	printf("Combien de termes? ");
	scanf("%d", &nb_termes);

	termes_fibo = calculer_fibo(nb_termes);

	for (int i = 0; i < nb_termes; i++)
	{
		printf("%d ", termes_fibo[i]);
	}
	printf("\n");

	free(termes_fibo);

	/*int* tab;
	int taille; 

	printf("Combien de valeurs?");
	scanf("%d", &taille);

	tab = (int*)malloc(taille * sizeof(int));
	if (tab == NULL)
	{
		exit(EXIT_FAILURE);
	}

	tab[0] = 10; 
	tab[1] = 20; 

	printf("Case 0: %d, Case 1: %d\n", tab[0], tab[1]);
	*/
	system("pause");
	return 0;
}
