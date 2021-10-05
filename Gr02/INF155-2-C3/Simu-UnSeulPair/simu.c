/*
Programme qui estime la probabilité d'obtenir une et une 
seule valeur paire en lançant 3 dés à 6 faces

Auteur: INF155-03
Date: 2020-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}


int main(void)
{

	int de1, de2, de3; //Valeurs tirées pour chaque dé
	int cpt; //Compteur d'itérations
	int nb_repetitions; //Nombre de fois qu'on simule le phenomene
	int succes; //Nombre de fois qu'on a obtenu un seul pair
	double resultat; //Probabilite calculee

	/* On initialise le generateur de nombres aleatoires. */
	srand((unsigned int)time(NULL));
	rand();

	printf("Combien de repetitions: ");
	scanf("%d", &nb_repetitions);

	cpt = 0;
	succes = 0;
	while (cpt < nb_repetitions)
	{
		de1 = nb_aleatoire(1, 6);
		de2 = nb_aleatoire(1, 6);
		de3 = nb_aleatoire(1, 6);

		/*if (de1 % 2 + de2 % 2 + de3 % 2 == 2) 
		{
			succes++;
		}*/
		succes += de1 % 2 + de2 % 2 + de3 % 2 == 2;
		cpt++;
	}

	resultat = (double)succes / nb_repetitions;

	printf("La probabilite d'obtenir 1 seul pair est: %lf\n", resultat);

	


	system("pause");
	return EXIT_SUCCESS;
}