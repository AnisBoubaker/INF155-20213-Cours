
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* tab;

	tab = (int*)malloc(50 * sizeof(int));
	tab[0] = 10; 
	tab[1] = 20;
	tab[2] = 30;
	/* ..... */


	/*
	//Technique de reallocation si on veut absolument continuer l'execution
	//du programme malgres le manque de mémoire (peu utilisé)
	int* adr_tmp; 
	adr_tmp = realloc(tab, 100 * sizeof(int));
	if (adr_tmp != NULL)
	{
		tab = adr_tmp;
	}
	*/

	//Technique de réallocation qui termine le programme si le realloc
	//n'est pas en mesure de nous fournir le nouvel espace. 
	tab = realloc(tab, 100 * sizeof(int));
	if (tab == NULL)
	{
		exit(EXIT_FAILURE);
	}


	system("pause");
	return 0;
}