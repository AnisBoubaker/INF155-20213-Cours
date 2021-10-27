#include <stdio.h>
#include <stdlib.h>

#include "mod_tri.h"

int main(void)
{
	int tab[] = {10, 3, 56, 23, 176, 39, 10, 1, 15};
	int tab2[] = { 10, 3, 56, 23, 176, 39, 10, 1, 15 };
	int tab3[] = { 10, 3, 56, 23, 176, 39, 10, 1, 15 };

	int tab_coords[100][2] = {
		{10, 5},
		{3, 8},
		{3, 4},
		{13, 20}
	};

	tri_insertion(tab, 9);
	afficher_tab(tab, 9);

	tri_selection(tab2, 9);
	afficher_tab(tab2, 9);
	
	tri_bulle(tab3, 9);
	afficher_tab(tab3, 9);

	tri_coords(tab_coords, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("(%d, %d)\n", tab_coords[i][0], tab_coords[i][1]);
	}

	system("pause");
	return 0;
}