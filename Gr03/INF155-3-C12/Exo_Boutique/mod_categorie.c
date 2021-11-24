#define _CRT_SECURE_NO_WARNINGS
#include "mod_categorie.h"

t_categorie* cat_init(void)
{
	t_categorie* nouv_categorie; 

	nouv_categorie = (t_categorie*)malloc(sizeof(t_categorie));
	if (!nouv_categorie)
	{
		exit(EXIT_FAILURE);
	}

	nouv_categorie->nom = NULL;
	nouv_categorie->num = 0;

	return nouv_categorie;
}

void cat_set_nom(t_categorie* cat, const char* nom)
{
	if (cat->nom == NULL)
	{
		cat->nom = (char*)malloc(sizeof(char) * strlen(nom));
	}
	else
	{ 
		cat->nom = (char*)realloc(cat->nom, sizeof(char) * strlen(nom));
	}
	if (cat->nom == NULL)
	{
		exit(EXIT_FAILURE);
	}
	strcpy(cat->nom, nom);
}