

#include <stdio.h>
#include <stdlib.h>

void min_max_tab(int tab[], int taille, int* min, int* max);

int main(void)
{

	int tab[5] = { 10, 2, 3, 25, 2 };
	int min, max;

	min_max_tab(tab, 5, &min, &max);

	printf("Le minimum est: %d\n", min);
	printf("Le maximum est: %d\n", max);







	//int une_var = 15;
	//int une_autre_var = 10;

	////Pointeur: 
	//int* adr_une_var;

	///*printf("%p\n", &une_var);
	//printf("%p\n", &une_autre_var);
	//*/








	//int** adr_adr_une_var = &adr_une_var;


	//adr_une_var = &une_var;

	//printf("Une var = %d\n", une_var);
	//printf("*adr_une_var = %d\n", *adr_une_var);

	//*adr_une_var = 50;
	//printf("Apres modification a 50: \n");
	//printf("*adr_une_var = %d\n", *adr_une_var);
	//printf("Une var = %d\n", une_var);

	//**adr_adr_une_var = 100;
	//printf("Apres double dereferencement: \n");
	//printf("*adr_une_var = %d\n", *adr_une_var);
	//printf("Une var = %d\n", une_var);

	//printf("%p\n", *adr_adr_une_var);

	system("pause");
	return 0;
}


//Trouve la valeur minimale et la valeur maximale du tableau
void min_max_tab(int tab[], int taille, int* min, int* max)
{
	*min = tab[0];
	*max = tab[0];

	for (int i = 1; i < taille; i++)
	{
		if (tab[i] > *max)
		{
			*max = tab[i];
		}
		if (tab[i] < *min)
		{
			*min = tab[i];
		}
	}
}