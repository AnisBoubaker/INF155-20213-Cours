
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* fibo(int nb_termes)
{
	//int termes[1000]; 
	int* termes; 

	termes = (int*)malloc(nb_termes * sizeof(int));
	if (termes == NULL)
	{
		printf("Plus de memoire!\n");
		exit(EXIT_FAILURE);
		//NE jamais faire ça si on n'est pas dans le main!!
		//return EXIT_FAILURE;
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
	int* un_ptr;
	int tab[100];

	int* tableau; 
	int nb_cases; 

	un_ptr = tab;
	un_ptr[1] = 50;
	printf("Case 1 de tab: %d\n", tab[1]);


	printf("Combien de valeurs? ");
	scanf("%d", &nb_cases);
	tableau = (int*)malloc(nb_cases * sizeof(int));

	//*(tableau + 1) = 50;
	tableau[1] = 50;

	printf("Tableau à la case 1: %d\n", tableau[1]);

	//Libère l'espace mémoire alloué dont le premier octet est tableau
	free(tableau);

	tableau = NULL;











	int* termes_fibo;

	termes_fibo = fibo(20);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", termes_fibo[i]);
	}
	printf("\n");
	free(termes_fibo);

	system("pause");
	return 0;
}