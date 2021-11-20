#include "mod_point.h"

t_point* point_init(void)
{
	t_point* nouv_point;
	nouv_point = (t_point*)malloc(sizeof(t_point));
	if (!nouv_point)
	{
		exit(EXIT_FAILURE);
	}

	nouv_point->nom = (char*)malloc(sizeof(char) * TAILLE_MAX_NOM);
	if (nouv_point->nom == NULL)
	{
		exit(EXIT_FAILURE);
	}

	return nouv_point;
}

void point_free(t_point* point)
{
	free(point->nom);
	free(point);
}

void point_afficher(t_point* p)
{
	printf("(%s: %.2lf, %.2lf)\n", p->nom, p->x, p->y);
}

double point_distance(t_point* p1, t_point* p2)
{
	double distance; 

	distance = pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2);
	distance = sqrt(distance);

	return distance;
}


//retourne une chaine de caractere de la forme: (NOM: ABSCISSE, ORDONNEE)
char* point_to_string(t_point* p)
{
	char buffer[100];
	char* resultat;

	sprintf(buffer, "(%s: %.2lf, %.2lf)", p->nom, p->x, p->y);

	resultat = (char*)malloc(sizeof(char)*(strlen(buffer)+1));
	if (resultat == NULL)
	{
		printf("Erreur d'allocation!");
		exit(EXIT_FAILURE);
	}

	strcpy(resultat, buffer);

	return resultat;
}
