#ifndef MOD_PRODUIT__H_
#define MOD_PRODUIT__H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mod_categorie.h"

typedef struct t_produit
{
	char* nom; 
	double prix; 
	int qte_stock;
	t_categorie* categorie; 
} t_produit;

/*
*/
t_produit* prd_init(void);


/*
*/
void prd_set_nom(t_produit* prd, const char* nom);

/*
*/
void prd_afficher(t_produit* prd);

#endif