/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Effectue la somme des entiers dans un intervalle.
PARAMETRES: 
min (entier): La borne minimale de l'intervalle
max (entier): La borne maximale de l'intervalle
RETOUR(entier): La somme des entiers entre min et max.
*/
int somme_termes_entiers(int min, int max);


int lire_entier(int min, int max);
int menu(void);

int main(void)
{
	int choix; 

	choix = menu();

	printf("Merci, vous avez choisi l'option: %d\n", choix);
	


	/*int toto = 5;
	double val = 10;
	carre(val); //carre(10);
	printf("val contient la valeur: %lf\n", val);
	*/

	/*int valeur_lue;

	valeur_lue = lire_entier(1, 10);

	printf("La valeur que vous avez saisi: %d\n", valeur_lue);
	*/
	/*
	afficher_menu();

	la_somme = somme_termes_entiers(10, 40);
	printf("La somme calculee: %d\n", la_somme);

	la_somme = somme_termes_entiers(0, 100);
	printf("La somme calculee: %d\n", la_somme);
	*/
	system("pause");
	return EXIT_SUCCESS;
}



int somme_termes_entiers(int min, int max)
{
	int somme = 0;
	int cpt = min;

	while (cpt <= max)
	{
		somme += cpt;
		cpt++;
	}

	return somme;
}



int lire_entier(int min, int max)
{
	int saisie = min - 1; //Valeur saisie par l'usager

	while (saisie < min || saisie > max)
	{
		printf("Saisir une valeur entre %d et %d: ", min, max);
		scanf("%d", &saisie);
	}

	return saisie;
}


int menu(void)
{
	int choix;

	printf("MENU: \n");
	printf("1. Nouveau client\n");
	printf("2. Modifier un client existant\n");
	printf("3. Nouvelle facture\n");
	printf("4. Quitter le programme\n");

	choix = lire_entier(1, 4);

	return choix;
}


double carre(double val)
{
	val = val * val;
	return val;
}
