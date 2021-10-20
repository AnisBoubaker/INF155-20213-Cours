

/*
*/

#include <stdio.h>
#include <stdlib.h>

void def_valeur(int tab[], int taille, int nouv_valeur);


int main(void)
{
	int tab[100] = {10, 20 , 30 , 40 , 50};

	printf("%p\n", tab);

	printf("%d\n", *tab);

	printf("%d\n", *(tab+1)  );

	def_valeur(tab, 50, 10);

	system("pause");
	return 0;
}

//Mettre nouv_valeur dans toutes les cases du tableau
void def_valeur(int* tab, int taille, int nouv_valeur)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = nouv_valeur;
		//(tab + i) = nouv_valeur;
 	}
}