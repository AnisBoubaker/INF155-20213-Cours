#ifndef MOD_POINT__H_
#define MOD_POINT__H_

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAILLE_MAX_NOM 20

typedef struct t_point
{
	double x;
	double y;
	char* nom;
} t_point;


/*
*/
t_point* point_init(void);

/*
*/
void point_free(t_point* point);

/*
*/
void point_afficher(t_point* p);


/*
*/
double point_distance(t_point* p1, t_point* p2);

/*
*/
char* point_to_string(t_point* p);

#endif#