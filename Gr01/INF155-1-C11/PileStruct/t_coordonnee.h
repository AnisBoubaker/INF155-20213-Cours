#ifndef T_COORDONNEE__H_
#define T_COORDONNEE__H_

#include <stdio.h>
#include <math.h>

typedef struct coordonnee
{
	double x;
	double y;
} t_coordonnee;


/*
*/
void t_coordonnee_afficher(t_coordonnee coord);

/*
*/
double t_coordonnee_distance(t_coordonnee c1, t_coordonnee c2);

#endif