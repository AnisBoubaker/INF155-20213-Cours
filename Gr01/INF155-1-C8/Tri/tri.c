

#include <stdio.h>
#include <stdlib.h>
#include "algos_tri.h"

#define TAILLE_MAX 100




int main(void)
{
	int tab1[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };
	int tab2[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };
	int tab3[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };

	int coords[TAILLE_MAX][2] = {
		{55, 10},
		{20, 15},
		{20, 2}, 
		{35, 10}
	};

	tri_insertion(tab1, 7);
	afficher_tab(tab1, 7);
	
	tri_selection(tab2, 7);
	afficher_tab(tab2, 7);

	tri_bulle(tab3, 7);
	afficher_tab(tab3, 7);

	tri_coords(coords, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("(%d, %d)\n", coords[i][0], coords[i][1]);
	}

	system("pause");
	return 0;
}
