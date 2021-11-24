#define _CRT_SECURE_NO_WARNINGS
#include "mod_produit.h"

t_produit* prd_init(void)
{
	t_produit* nouv_produit; 

	nouv_produit = (t_produit*)malloc(sizeof(t_produit));
	if (!nouv_produit)
	{
		exit(EXIT_FAILURE);
	}
	nouv_produit->nom = NULL;
	nouv_produit->categorie = NULL;
	nouv_produit->prix = 0;
	nouv_produit->qte_stock = 0;

	return nouv_produit;
}

void prd_set_nom(t_produit* prd, const char* nom)
{
	if (prd->nom == NULL)
	{
		prd->nom = (char*)malloc(sizeof(char) * strlen(nom));
	}
	else
	{
		prd->nom = (char*)realloc(prd->nom, sizeof(char) * strlen(nom));
	}
	if (prd->nom == NULL)
	{
		exit(EXIT_FAILURE);
	}
	strcpy(prd->nom, nom);
}