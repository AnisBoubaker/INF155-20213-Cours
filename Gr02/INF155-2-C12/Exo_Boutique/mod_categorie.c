
#include "mod_categorie.h"

t_categorie* cat_init(void)
{
	t_categorie* nouv_cat; 

	nouv_cat = (t_categorie*)malloc(sizeof(t_categorie));
	if (!nouv_cat)
	{
		exit(EXIT_FAILURE);
	}

	nouv_cat->nom = NULL;
	nouv_cat->numero = 0;

	return nouv_cat;
}

void cat_set_nom(t_categorie* cat, const char* nom)
{
	if (cat->nom == NULL)
	{
		cat->nom = (char*)malloc(sizeof(char) * (strlen(nom) + 1));
	}
	else
	{
		cat->nom = (char*)realloc(cat->nom, sizeof(char) * (strlen(nom) + 1));
	}
	
	if (!cat->nom)
	{
		exit(EXIT_FAILURE);
	}
	strcpy(cat->nom, nom);
}