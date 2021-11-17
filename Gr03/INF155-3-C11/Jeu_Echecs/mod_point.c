#include "mod_point.h"


t_point* point_init(void)
{
	t_point* nouv_point; 

	nouv_point = (t_point*)malloc(sizeof(t_point));
	if (nouv_point == NULL)
	{
		printf("Erreur d'allocation!");
		exit(EXIT_FAILURE);
	}

	nouv_point->x = 0; 
	nouv_point->y = 0;

	return nouv_point;
}

void point_free(t_point* p)
{
	free(p);
}

void point_afficher(const t_point* p)
{
	printf("(%.2lf, %.2lf)\n", (*p).x, p->y);
}

double point_distance(const t_point* p1, const t_point* p2)
{
	double distance; 

	distance = pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2);
	distance = sqrt(distance);

	return distance;
}