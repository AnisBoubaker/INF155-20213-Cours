/*
Programme qui simule la probabilité d'obtenir 
un et un seul dé pair en lançant 3 dés
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void)
{
	int de1, de2, de3; //Valeur des dés lancés
	int nb_repetitions = 1000000;
	int nb_pairs; //Nombre de pairs obtenus
	int nb_succes = 0; //Nombre de fois où on a un seul pair
	int cpt = 0; //Compteur de boucle
	double proba; //Probabilite d'obtemir un seul pair

	//Initialiser le générateur de nombres aléatoires
	srand((unsigned int)time(NULL));
	rand();

	while (cpt < nb_repetitions)
	{
		de1 = nb_aleatoire(1, 6);
		de2 = nb_aleatoire(1, 6);
		de3 = nb_aleatoire(1, 6);

		if (de1 % 2 + de2 % 2 + de3 % 2 == 2)
		{
			nb_succes++;
		}

		cpt++;
	}

	proba = (double)nb_succes / nb_repetitions;

	printf("La probabilite calculee: %lf\n", proba);

	system("pause");
	return EXIT_SUCCESS;
}