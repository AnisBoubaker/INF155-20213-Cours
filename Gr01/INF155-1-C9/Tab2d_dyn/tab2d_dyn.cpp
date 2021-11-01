
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int** allouer_tab2d(int nb_lignes, int nb_colonnes)
{
	int** tab;

	tab = (int**)malloc(sizeof(int*) * nb_lignes);
	if (tab == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < nb_lignes; i++)
	{
		tab[i] = (int*)malloc(sizeof(int) * nb_colonnes);
		if (tab[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(tab[j]);
			}
			free(tab);
			return NULL;
		}
	}

	return tab;
}


int main(void)
{
	int** tab2d; 


	tab2d = allouer_tab2d(5, 4);
	if (tab2d == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tab2d[i][j] = i * j;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", tab2d[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}