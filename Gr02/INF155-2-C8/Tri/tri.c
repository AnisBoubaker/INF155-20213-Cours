

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "algo_tri.h"

#define TAILLE_MAX 100

int main(void)
{
	int tab1[TAILLE_MAX] = {44, 10, 20 ,55, 10, 24, 35};
	int tab2[TAILLE_MAX] = { 44, 10, 20 ,55, 10, 24, 35 };
	int tab3[TAILLE_MAX] = { 44, 10, 20 ,55, 10, 24, 35 };

	double tab_coords[TAILLE_MAX][2] = {
		{10, 5},
		{9, 8},
		{9, 4}, 
		{0, 2}, 
		{50, 10}
	};
	
	tri_insertion(tab1, 7);
	afficher_tab(tab1, 7);

	tri_selection(tab2, 7);
	afficher_tab(tab2, 7);
	
	tri_bulle(tab3, 7);
	afficher_tab(tab3, 7);

	tri_coord(tab_coords, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("(%lf, %lf)\n", tab_coords[i][0], tab_coords[i][1]);
	}


	system("pause");
	return 0;
}
