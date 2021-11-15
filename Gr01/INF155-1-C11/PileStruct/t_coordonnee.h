#ifndef T_COORDONNEE__H_
#define T_COORDONNEE__H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordonnee
{
	double x;
	double y;
} t_coordonnee;


/*
*/
t_coordonnee* t_coordonnee_init(void);

/*
*/
void t_coordonnee_free(t_coordonnee* coord);

/*
*/
void t_coordonnee_afficher(const t_coordonnee* coord);

/*
*/
double t_coordonnee_distance(const t_coordonnee* c1, const t_coordonnee* c2);

/*
*/
char* t_coordonnee_to_string(const t_coordonnee* coord);

#endif