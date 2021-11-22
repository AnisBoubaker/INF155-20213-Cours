

#include <stdio.h>
#include <stdlib.h>
#include "mod_categorie.h"
#include "mod_produit.h"
#include <string.h>

int main(void)
{
	t_categorie* c1; 
	t_produit* p1;
	t_produit* p2;

	c1 = cat_init("Produits en canne", 10);

	p1 = prd_init("Soupe a l'oignon", 5.50, 120, c1);
	p2 = prd_init("Pois chiches", 3.00, 80, c1);


	cat_free(c1);
	system("pause");
	return 0;
}