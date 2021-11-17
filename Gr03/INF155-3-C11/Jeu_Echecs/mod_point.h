#ifndef MOD_POINT__H_
#define MOD_POINT__H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct t_point
{
	double x; 
	double y;
} t_point;

/*
*/
t_point* point_init(void);


/*
*/
void point_free(t_point* p);

/*
*/
void point_afficher(t_point* p);

/*
*/
double point_distance(t_point* p1, t_point* p2);


#endif