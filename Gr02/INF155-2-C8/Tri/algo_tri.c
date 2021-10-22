#include "algo_tri.h"


void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d\t", tab[i]);
	}
	printf("\n");
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
		for (int j = i + 1; j < taille; j++)
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


void tri_bulle(int tab[], int taille)
{
	for (int i = taille; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				int temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}

void tri_coord(double tab[][2], int taille)
{
	for (int i = taille; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (tab[j][0] > tab[j + 1][0] || (tab[j][0] == tab[j + 1][0] && tab[j][1] > tab[j + 1][1])) 
			{
				int temp; 
				temp = tab[j][0];
				tab[j][0] = tab[j + 1][0];
				tab[j + 1][0] = temp;

				temp = tab[j][1];
				tab[j][1] = tab[j + 1][1];
				tab[j + 1][1] = temp;
			}
		}
	}
}