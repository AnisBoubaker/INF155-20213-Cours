

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

void tri_insertion(int tab[], int taille);

int main(void)
{
	int tab[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };

	tri_insertion(tab, 7);

	for (int i = 0; i < 7; i++)
	{
		printf("%d\t", tab[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

void tri_insertion(int tab[], int taille)
{
	int x; 
	int j;
	for (int i = 1; i < taille; i++)
	{
		x = tab[i];
		j = i;
		while (j > 0 && tab[j - 1] > x)
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = x;
	}
}

void tri_selection(int tab[], int taille)
{
	int indice_min; 
	for (int i = 0; i < taille; i++)
	{
		indice_min = i;
		for (int j = i + 1; j < taille ; j++)
		{
			if (tab[j] < tab[indice_min])
			{
				indice_min = j;
			}
		}
		if (indice_min != i)
		{
			int temp = tab[indice_min];
			tab[indice_min] = tab[i];
			tab[i] = temp;
		}
	}
}