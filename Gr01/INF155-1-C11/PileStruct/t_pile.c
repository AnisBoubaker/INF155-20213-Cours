
#include "t_pile.h"

t_pile* t_pile_init(void)
{
	t_pile* pile;

	pile = (t_pile*)malloc(sizeof(t_pile));
	if (!pile)
	{
		exit(EXIT_FAILURE);
	}

	pile->nb_elements = 0;

	return pile;
}

void t_pile_free(t_pile* la_pile)
{
	free(la_pile);
}

//Ajoute un element au sommet de la pile. Retourne vrai si 
//l'ajout a fonction, faux sinon.
int t_pile_empiler(t_pile* la_pile, t_coordonnee* coord)
{
	if (la_pile->nb_elements < CAPACITE)
	{
		la_pile->contenu[la_pile->nb_elements] = coord;
		la_pile->nb_elements++;
		return 1;
	}
	return 0;
}

int t_pile_est_vide(t_pile* la_pile)
{
	/*if (la_pile->nb_elements == 0)
	{
		return 1; 
	}
	else
	{
		return 0;
	}*/
	return (la_pile->nb_elements == 0);
}

t_coordonnee* t_pile_depiler(t_pile* la_pile)
{
	if (t_pile_est_vide(la_pile))
	{
		return NULL;
	}

	la_pile->nb_elements--;
	return la_pile->contenu[la_pile->nb_elements];
}