

#include <stdio.h>
#include <stdlib.h>
#include "mod_produit.h"
#include "mod_categorie.h"

int main(void)
{

	t_produit* p1; 
	t_produit* p2; 

	t_categorie* c1;

	c1 = cat_init();
	cat_set_nom(c1, "Produits en canne");

	p1 = prd_init();
	prd_set_nom(p1, "Soupe a l'oignon");
	p1->categorie = c1;

	p2 = prd_init();
	prd_set_nom(p2, "Pois chiches");
	p2->categorie = c1;

	printf("%s, prix: %.2lf, Qte Stock: %d (Categorie: %s)\n",
		p1->nom,
		p1->prix,
		p1->qte_stock,
		p1->categorie->nom
		);


	system("pause");
	return EXIT_SUCCESS;
}