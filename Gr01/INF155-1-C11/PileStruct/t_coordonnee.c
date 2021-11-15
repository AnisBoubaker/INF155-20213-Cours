#include "t_coordonnee.h"

#define TAILLE_MAX_BUFFER 100


t_coordonnee* t_coordonnee_init(double x, double y)
{
	t_coordonnee* coord;

	coord = (t_coordonnee*)malloc(sizeof(t_coordonnee));
	if (!coord)
	{
		exit(EXIT_FAILURE);
	}

	coord->x = x; 
	coord->y = y;

	return coord;
}

void t_coordonnee_free(t_coordonnee* coord)
{
	free(coord);
}

void t_coordonnee_afficher(const t_coordonnee* coord)
{
	printf("(%.2lf, %.2lf)\n", (*coord).x, coord->y);
}

double t_coordonnee_distance(const t_coordonnee* c1, const t_coordonnee* c2)
{
	double distance; 

	distance = pow(c1->x - c2->x, 2) + pow(c1->y - c2->y, 2);
	distance = sqrt(distance);

	return distance;
}

char* t_coordonnee_to_string(const t_coordonnee* coord)
{
	//NE PAS FAIRE ÇA, L'ESPACE MEMOIRE EST DETRUIT QUAND ON QUITTE LA FONCTION
	//char resultat[TAILLE_MAX];
	
	char* resultat; 

	resultat = (char*)malloc(sizeof(char) * TAILLE_MAX_BUFFER);
	if (!resultat) //eq. if(resultat == NULL)
	{
		exit(EXIT_FAILURE);
	}

	sprintf(resultat, "(%.2lf, %.2lf)", coord->x, coord->y);

	resultat = (char*)realloc(resultat, sizeof(char) * (strlen(resultat)+1) );
	if (!resultat)
	{
		exit(EXIT_FAILURE);
	}


	return resultat;
}