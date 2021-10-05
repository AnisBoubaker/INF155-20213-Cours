/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_NOTES 10
#define PI 3.1415

const double pi = 3.1415;

double max_tab(double tab[], int taille);

void doubler_valeurs(double tab[], int taille)
{
	int tab[10] = { 0 };


	for (int i = 0; i < taille; i++)
	{
		tab[i] = tab[i] * 2;
	}
}


int main(void)
{ 
	double le_tab[10] = {-45.7, -10.3, -67.4, -200, -67, -9.5};
	double notes[MAX_NOTES] = {60, 65.5, 70, 45, 100, 87, 74, 80, 50, 79};
	double max; 
	double moyenne=0; 

	doubler_valeurs(le_tab, 6);

	for (int i = 0; i < 6; i++)
	{
		printf("%lf\n", le_tab[i]);
	}


	/*
	max = max_tab(le_tab, 6);
	printf("Le maximum est: %lf\n", max);

	

	for (int i = 0; i < MAX_NOTES; i++)
	{
		moyenne += notes[i];
	}
	moyenne = moyenne / MAX_NOTES;
	*/
	system("pause");
	return 0;
}


double max_tab(double tab[], int taille)
{
	double max=tab[0]; 

	for (int i = 1; i < taille; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}
	return max;
}