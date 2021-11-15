#ifndef T_PILE__H_
#define T_PILE__H_

#include "t_coordonnee.h"

#define TAILLE_INCREMENT 10

typedef struct pile
{
	t_coordonnee** contenu; //Ptr vers un tableau 1D de t_coordonnee*
	int nb_elements;
	int capacite_max;
} t_pile;

t_pile* t_pile_init(void);


/*
*/
int t_pile_empiler(t_pile* la_pile, t_coordonnee* coord);

/*
*/
t_coordonnee* t_pile_depiler(t_pile* la_pile);

/*
*/
int t_pile_est_vide(t_pile* la_pile);

#endif