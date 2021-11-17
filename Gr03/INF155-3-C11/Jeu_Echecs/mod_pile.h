#ifndef MOD_PILE__H_
#define MOD_PILE__H_

#include <stdlib.h>
#include <stdio.h>
#include "mod_point.h"

#define PILE_INCREMENT 1

typedef struct t_pile
{
	t_point** contenu; //Tableau 1D de t_point*
	int nb_elements;
	int capacite;
} t_pile;


t_pile* pile_init(void);

/*
*/
void pile_free(t_pile* la_pile);


/*
Retourne vrai si la pile est vide, faux sinon
*/
int pile_vide(const t_pile* la_pile);

/*
Ajoute un point au sommet de la pile, retourne vrai si
l'ajout a fonctionné, faux sinon.
*/
int pile_empiler(t_pile* la_pile, t_point* pt);


/*
Dépile et retourne le point au sommet de la pile.
Si la pile est vide, on retourne NULL;
*/
t_point* pile_depiler(t_pile* la_pile);

#endif