#include "mod_categorie.h"

t_categorie* cat_init(const char* nom, int numero)
{
	t_categorie* nouv_cat;

	nouv_cat = (t_categorie*)malloc(sizeof(t_categorie));
	if (!nouv_cat)
	{
		exit(EXIT_FAILURE);
	}

	nouv_cat->nom = (char*)malloc(sizeof(char) * (strlen(nom)+1));
	if (!nouv_cat->nom)
	{
		exit(EXIT_FAILURE);
	}
	strcpy(nouv_cat->nom, nom);

	nouv_cat->numero = numero;
	return nouv_cat;
}

void cat_free(t_categorie* categorie)
{
	free(categorie->nom);
	free(categorie);
}