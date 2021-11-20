#include "mod_pile.h"

t_pile* pile_init(void)
{
	t_pile* nouv_pile;

	nouv_pile = (t_pile*)malloc(sizeof(t_pile));
	if (!nouv_pile)
	{
		exit(EXIT_FAILURE);
	}

	nouv_pile->contenu = malloc(sizeof(t_point*) * PILE_INCREMENT);
	if (!nouv_pile->contenu)
	{
		exit(EXIT_FAILURE);
	}

	nouv_pile->taille = 0;
	nouv_pile->capacite_actuelle = PILE_INCREMENT;

	return nouv_pile;
}

void pile_free(t_pile* pile)
{
	free(pile->contenu);
	free(pile);
}

//Empile le point en parametre, retourne vrai si ça a fonctionné, faux sinon.
int pile_empiler(t_pile* pile, t_point* point)
{
	if (pile->taille >= pile->capacite_actuelle)
	{
		pile->capacite_actuelle += PILE_INCREMENT;
		pile->contenu = (t_point**)realloc(pile->contenu, sizeof(t_point*) * pile->capacite_actuelle);
		if (pile->contenu == NULL)
		{
			exit(EXIT_FAILURE);
		}
	}
	pile->contenu[pile->taille] = point;
	pile->taille++;
	return 1;
}

//Retourne vrai si la pile est vide, faux sinon
int pile_vide(t_pile* pile)
{
	/*if (pile->taille == 0)
	{
		return 1;
	}
	return 0;*/

	return pile->taille == 0;
}


//Retourne et dépile le point sur le haut de la pile, retourne NULL sinon
t_point* pile_depiler(t_pile* pile)
{
	if(pile_vide(pile))
	{
		return NULL;
	}
	pile->taille--;
	return pile->contenu[pile->taille];
}



