#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*

*/
int val_pos(const int tab[], int taille, int resultats[]);

int main(void)
{
	int le_tab[6] = { 10, -5, -3, 12, 0, 3 };
	int valeurs_positives[6];
	int nb_positifs; 
	
	nb_positifs = val_pos(le_tab, 6, valeurs_positives);

	for (int i = 0; i < nb_positifs; i++)
	{
		printf("%d\n", valeurs_positives[i]);
	}

	system("pause");
	return 0;
}


int val_pos(const int tab[], int taille, int resultats[])
{
	int nb_positifs = 0; 
	for (int i = 0; i < taille;  i++)
	{
		if (tab[i] > 0)
		{
			resultats[nb_positifs] = tab[i];
			nb_positifs++;
		}
	}
	return nb_positifs;
}