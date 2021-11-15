
#include "t_pile.h"

t_pile* t_pile_init(void)
{
	t_pile* pile;

	pile = (t_pile*)malloc(sizeof(t_pile));
	if (!pile)
	{
		exit(EXIT_FAILURE);
	}

	pile->contenu = (t_coordonnee**)malloc(sizeof(t_coordonnee*) * TAILLE_INCREMENT);
	if (!pile->contenu)
	{
		exit(EXIT_FAILURE);
	}

	pile->nb_elements = 0;
	pile->capacite_max = TAILLE_INCREMENT;

	return pile;
}

void t_pile_free(t_pile* la_pile)
{
	free(la_pile->contenu);
	free(la_pile);
}

//Ajoute un element au sommet de la pile. Retourne vrai si 
//l'ajout a fonction, faux sinon.
int t_pile_empiler(t_pile* la_pile, t_coordonnee* coord)
{
	if (la_pile->nb_elements == la_pile->capacite_max)
	{
		//On augmente la taille du tableau alloué
		la_pile->capacite_max += TAILLE_INCREMENT;
		la_pile->contenu = (t_coordonnee**)realloc(la_pile->contenu,
			sizeof(t_coordonnee*)*la_pile->capacite_max);
		if (!la_pile->contenu)
		{
			exit(EXIT_FAILURE);
		}
	}

	la_pile->contenu[la_pile->nb_elements] = coord;
	la_pile->nb_elements++;
	return 1;
}

t_coordonnee* t_pile_depiler(t_pile* la_pile)
{
	//TODO: Réduire l'espace si on a trop dépilé.

	if (t_pile_est_vide(la_pile))
	{
		return NULL;
	}

	la_pile->nb_elements--;
	return la_pile->contenu[la_pile->nb_elements];
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



int t_pile_taille(t_pile* la_pile)
{
	return la_pile->nb_elements;
}

t_coordonnee* t_pile_haut_pile(t_pile* la_pile)
{
	if (t_pile_est_vide(la_pile))
	{
		return NULL;
	}

	return la_pile->contenu[la_pile->nb_elements - 1];
}