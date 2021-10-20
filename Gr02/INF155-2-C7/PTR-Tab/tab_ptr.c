/*

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int un_tab[100] = {50, 10 , 20 , 30};
	int* un_ptr; 

	//mettre_a_zero(un_tab, 100);

	printf("case 0 de un_tab: %d\n", un_tab[0]);
	printf("Contenu de l'adresse un_tab: %d\n", *un_tab);

	printf("case 1 de un_tab: %d\n", un_tab[1]);
	printf("Contenu de l'adresse un_tab+1: %d\n", *(un_tab+1) );

	//un_ptr = un_tab;


	system("pause");
	return 0;
}

void mettre_a_zero(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = 0;
	}
}