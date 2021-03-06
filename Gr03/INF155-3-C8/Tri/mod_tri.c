#include "mod_tri.h"



void tri_insertion(int tab[], int taille)
{
	int x;  //Copie de la valeur ? placer
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
			int tmp;
			tmp = tab[i];
			tab[i] = tab[indice_min];
			tab[indice_min] = tmp;
		}
	}
}

void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}

void tri_bulle(int tab[], int taille)
{
	for (int i = taille; i >= 1; i--)
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


void tri_coords(int coords[][2], int taille)
{
	for (int i = taille; i >= 1; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (coords[j][0] > coords[j + 1][0]
				|| (coords[j][0]==coords[j + 1][0] && coords[j][1]>coords[j+1][1]))
			{
				int temp = coords[j][0];
				coords[j][0] = coords[j + 1][0];
				coords[j + 1][0] = temp;

				temp = coords[j][1];
				coords[j][1] = coords[j + 1][1];
				coords[j + 1][1] = temp;
			}
		}
	}
}