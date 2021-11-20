#ifndef MOD_PILE__H_
#define MOD_PILE__H_

#include <stdlib.h>
#include "mod_point.h"

#define PILE_INCREMENT 10

typedef struct t_pile
{
	t_point** contenu; //Tableau 1D de t_point*
	int taille; //Nombre d'éléments contenus dans la pile
	int capacite_actuelle;
} t_pile;


/*
*/
t_pile* pile_init(void);

/*
*/
int pile_empiler(t_pile* pile, t_point* point);

/*
*/
int pile_vide(t_pile* pile);

/*
*/
t_point* pile_depiler(t_pile* pile);

#endif