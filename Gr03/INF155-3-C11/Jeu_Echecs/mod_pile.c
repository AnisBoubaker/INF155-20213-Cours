#include "mod_pile.h"

t_pile* pile_init(void)
{
	t_pile* nouv_pile;

	nouv_pile = (t_pile*)malloc(sizeof(t_pile));
	if (nouv_pile == NULL)
	{
		printf("Erreur d'allocation\n");
		exit(EXIT_FAILURE);
	}

	nouv_pile->contenu = (t_point**)malloc(sizeof(t_point*) * PILE_INCREMENT);
	if (nouv_pile->contenu == NULL)
	{
		printf("Erreur d'allocation\n");
		exit(EXIT_FAILURE);
	}
	nouv_pile->nb_elements = 0;
	nouv_pile->capacite = PILE_INCREMENT;

	return nouv_pile;
}

void pile_free(t_pile* la_pile)
{
	free(la_pile->contenu);
	free(la_pile);
}

/*
Ajoute un point au sommet de la pile, retourne vrai si 
l'ajout a fonctionné, faux sinon.
*/
int pile_empiler(t_pile* la_pile, t_point* pt)
{
	if (la_pile->nb_elements >= la_pile->capacite) 
	{
		la_pile->capacite += PILE_INCREMENT;
		la_pile->contenu = (t_point**)realloc(la_pile->contenu, 
			sizeof(t_point*) * la_pile->capacite);
	}

	la_pile->contenu[la_pile->nb_elements] = pt;
	la_pile->nb_elements++;
	return 1;
}

/*
Retourne vrai si la pile est vide, faux sinon
*/
int pile_vide(const t_pile* la_pile)
{
	/*
	if(la_pile->nb_elements ==0)
	{
		return 1; 
	}
	return 0;
	*/
	return la_pile->nb_elements == 0;
}

/*
Dépile et retourne le point au sommet de la pile. 
Si la pile est vide, on retourne NULL;
*/
t_point* pile_depiler(t_pile* la_pile)
{
	//TODO: Libérer la mémoire au besoin

	if (pile_vide(la_pile))
	{
		return NULL;
	}

	la_pile->nb_elements--;
	return la_pile->contenu[la_pile->nb_elements];
}


