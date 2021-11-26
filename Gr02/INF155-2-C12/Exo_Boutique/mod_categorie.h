#ifndef MOD_CATEGORIE__H_
#define MOD_CATEGORIE__H_

#include <stdio.h>
#include <stdlib.h>

typedef struct t_categorie
{
	char* nom; 
	int numero; 
} t_categorie;


t_categorie* cat_init(void);

void cat_set_nom(t_categorie* cat, const char* nom);

#endif