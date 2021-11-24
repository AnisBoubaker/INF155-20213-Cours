#ifndef MOD_CATEGORIE__H_
#define MOD_CATEGORIE__H_

#include <stdlib.h>
#include <stdio.h>

typedef struct t_categorie
{
	int numero; 
	char* nom;
} t_categorie;


t_categorie* cat_init(const char* nom, int numero);


/*
*/
void cat_free(t_categorie* categorie);

/*
*/
void cat_afficher(t_categorie* categorie);


#endif