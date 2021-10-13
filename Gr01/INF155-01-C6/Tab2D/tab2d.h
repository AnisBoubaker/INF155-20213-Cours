#ifndef TAB2D__H
#define TAB2D__H


//Dépendances

#include <stdio.h>

#define MAX_COLS 100


//Interface
/*
Affiche un tableau d'entiers à deux dimensions
ENTREES: 

SORTIE
*/
void afficher_tab2d(int tab[][MAX_COLS], int nb_lignes, int nb_colonnes);


void moyenne_temperatures(double temperatures[][MAX_COLS], int nb_lignes, int nb_cols,
	double moyennes[]);
double moyenne_tab1d(double tab[], int taille);

#endif