#ifndef MOD_CATEGORIE__H_
#define MOD_CATEGORIE__H_

#include <stdlib.h>
#include <string.h>


typedef struct t_categorie
{
	char* nom; //Nom de la categorie
	//char nom[1000];
	int num;  //Numero de la categorie
} t_categorie;

/*
*/
t_categorie* cat_init(void);

/*
*/
void cat_set_nom(t_categorie* cat, const char* nom);

#endif