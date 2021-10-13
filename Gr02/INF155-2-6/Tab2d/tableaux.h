
#ifndef TABLEAUX__H
#define TABLEAUX__H

//Dépendances
#include <stdio.h>

#define TAILLE_MAX 100


// Interface

/*

*/
void moyenne_temperatures(double mesures[][TAILLE_MAX],
	int nb_lignes,
	int nb_colonnes,
	double moyennes[]);
/*

*/
double moyenne_tab1d(double tab[], int nb_elts);

/*
*/
int somme_tab2d(int tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes);

/*

*/
void afficher_tab2d(double tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes);

#endif