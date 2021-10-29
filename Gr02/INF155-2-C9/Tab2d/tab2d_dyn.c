
#include <stdio.h>
#include <stdlib.h>



int** allouer_2d(int nb_lignes, int nb_colonnes)
{
	int** tab2d;

	tab2d = (int**)malloc(sizeof(int*) * nb_lignes);
	if (tab2d == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < nb_lignes; i++)
	{
		tab2d[i] = (int*)malloc(sizeof(int) * nb_colonnes);
		if (tab2d[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(tab2d[j]);
			}
			free(tab2d);
			return NULL;
		}
	}

	return tab2d;
}


int main(void)
{

	int** tab2d;

	tab2d = allouer_2d(5, 4);
	if (tab2d == NULL)
	{
		printf("Plus de memoire!\n");
		exit(EXIT_FAILURE);
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tab2d[i][j] = i*j;
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