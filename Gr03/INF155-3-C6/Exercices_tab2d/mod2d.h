#ifndef MOD2D__H
#define MOD2D__H

#include <stdio.h>

#define LECTURES_MAX 100

/*
Calcule les moyennes de temperature journalieres
ENTREES
- 
SORTIE: Aucune
*/
void moyenne_temperatures(double mesures[][LECTURES_MAX], int nb_ligne, int nb_colonnes, double moyennes[]);

double moyenne_tab1d(double mesures[], int taille);

void afficher_tab2d(double tab[][LECTURES_MAX], int lignes, int colonnes);

#endif