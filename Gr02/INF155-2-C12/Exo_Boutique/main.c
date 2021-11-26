
#include <stdio.h>
#include <stdlib.h>
#include "mod_categorie.h"
#include "mod_produit.h"


int main(void)
{
	t_categorie* cat1;
	t_produit* p1; 
	t_produit* p2; 
	t_produit* p3;

	cat1 = cat_init();
	cat_set_nom(cat1, "Produits en conserve");

	p1 = prd_init();
	prd_set_nom(p1, "Soupe a l'oignon");
	p1->prix = 5;
	p1->qte_stock = 50;
	p1->categorie = cat1;

	p2 = prd_init();
	prd_set_nom(p2, "Pois chiches");
	p2->prix = 3.5;
	p2->qte_stock = 89;
	p2->categorie = cat1; 

	prd_afficher(p1);
	prd_afficher(p2);

	cat_set_nom(cat1, "Produits en canne");

	prd_afficher(p1);
	prd_afficher(p2);



	system("pause");
	return EXIT_SUCCESS;
}