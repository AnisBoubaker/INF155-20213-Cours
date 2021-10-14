/*
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

void min_max_tab(int tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes,
	int* min, int* max, double* moyenne);

void mettre_a_zero(int* tab, int taille);


int main(void)
{
	int tablo[TAILLE_MAX] = {10, 20 , 30, 40};


	printf("%p\n", tablo);
	printf("%d\n", *tablo);
	printf("%d\n", *(tablo + 1));

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *(tablo + i));
	}
	printf("\n");


	//mettre_a_zero(tablo, 50);


	/*
	int tab[3][TAILLE_MAX] = { {10, 20, 30, 50}, {25, 100, 45, 2}, {12, 34, 19, 90} };
	int min;
	int max;
	double moyenne;
	min_max_tab(tab, 3, 4, &min, &max, &moyenne);

	printf("La valeur min: %d\n", min);
	printf("La valeur max: %d\n", max);
	printf("La moyenne: %lf\n", moyenne);

	*/
	



	/*double salaire = 1500;
	double* adr_salaire;

	printf("La variable salaire se trouve a l'adresse: %p\n", &salaire);


	adr_salaire = &salaire;

	printf("La variable adr_salaire contient:  %p\n", adr_salaire);


	*adr_salaire = 3000;

	printf("Salaire contient : %lf\n", salaire);

	printf("Ce qui se trouve à adr_salaire: %lf\n", *adr_salaire);
	*/
	system("pause");
	return 0;
}


void min_max_tab(int tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes,
	int* min, int* max, double* moyenne) {
	*min = tab[0][0];
	*max = tab[0][0];
	double somme = 0;

	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++) {
			somme += tab[i][j];
			if (tab[i][j] > * max) {
				*max = tab[i][j];
			}
			else if (tab[i][j] < *min) {
				*min = tab[i][j];
			}
		}
	}
	*moyenne = somme / (nb_lignes * nb_colonnes);
}


void mettre_a_zero(int* tab, int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = 0;
	}
}