

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

void min_max_tab(int tab[], int taille, int* min, int* max);

int main(void)
{
	int un_tab[TAILLE_MAX] = { 10, 45, 6, 146, 1, 0, 100 };
	int min; 
	int max; 

	min_max_tab(un_tab, 7, &min, &max);

	printf("Le minimum du tableau est: %d\n", min);
	printf("Le maximum du tableau est: %d\n", max);

	system("pause");

	/*double salaire; 
	double* adr_salaire;
	double** adr_adr_salaire;

	salaire = 2;

	adr_salaire = &salaire;
	adr_adr_salaire = &adr_salaire; 

	*adr_salaire = 1500.50;

	printf("La variable salaire se trouve a: %p\n", &salaire);
	printf("Salaire contient: %lf\n", salaire);

	salaire = 3000;

	printf("L'informartion qui se trouve a adr_salaire est: %lf\n", *adr_salaire);


	**adr_adr_salaire = 4000; 

	system("pause");
	return 0;*/

}

void min_max_tab(int tab[], int taille, int* min, int* max)
{
	*min = tab[0];
	*max = tab[0];

	for (int i = 0; i < taille; i++)
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