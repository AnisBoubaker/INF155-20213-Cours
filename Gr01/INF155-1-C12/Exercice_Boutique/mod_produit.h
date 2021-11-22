#ifndef MOD_PRODUIT__H_
#define MOD_PRODUIT__H_

#include "mod_categorie.h"

#include <stdlib.h>

typedef struct t_produit
{
	char* nom;
	double prix;
	int qte_stock;
	t_categorie* categorie;
} t_produit;

/*
*/
t_produit* prd_init(const char* nom, double prix, int qte_stock, const t_categorie* categorie);

/*
*/
void prd_free(t_produit* produit);



#endif