#include <stdio.h>
#include <stdlib.h>

#include "mod_tri.h"

int main(void)
{
	int tab[] = {10, 3, 56, 23, 176, 39, 10, 1, 15};
	int tab2[] = { 10, 3, 56, 23, 176, 39, 10, 1, 15 };

	tri_insertion(tab, 9);
	afficher_tab(tab, 9);

	tri_selection(tab2, 9);
	afficher_tab(tab2, 9);
	

	system("pause");
	return 0;
}