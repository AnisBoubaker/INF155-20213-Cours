#ifndef ALGOS_TRI__H
#define ALGOS_TRI__H

#include <stdio.h>


/*
*/
void afficher_tab(int tab[], int taille);

/*
*/
void tri_insertion(int tab[], int taille);

/*
*/
void tri_selection(int tab[], int taille);

/*
*/
void tri_bulle(int tab[], int taille);

/*
�crire une fonction *trier_coords* qui re�oit un tableau de coordonn�es 
(tableau � 2 dimensions, avec 2 colonnes) et qui trie le tableau d'abord 
selon l'abscisse (x), puis selon l'ordonn�e (y) en utilisant l'algorithme 
du tri � bulle.
*/
void tri_coords(int tab[][2], int taille);



#endif