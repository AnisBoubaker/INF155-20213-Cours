#include "t_coordonnee.h"


void t_coordonnee_afficher(t_coordonnee coord)
{
	printf("(%.2lf, %.2lf)\n", coord.x, coord.y);
}

double t_coordonnee_distance(t_coordonnee c1, t_coordonnee c2)
{
	double distance; 

	distance = pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2);
	distance = sqrt(distance);

	return distance;
}


???? t_coordonnee_to_string(t_coordonnee coord)
{

}