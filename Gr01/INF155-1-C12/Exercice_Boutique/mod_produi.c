#include "mod_produit.h"


t_produit* prd_init(const char* nom, double prix, int qte_stock, const t_categorie* categorie)
{
	t_produit* nouv_produit; 
	nouv_produit = (t_produit*)malloc(sizeof(t_produit));
	if (!nouv_produit)
	{
		exit(EXIT_FAILURE);
	}
	
	nouv_produit->nom = (char*)malloc(sizeof(char) * (strlen(nom) + 1));
	if (!nouv_produit->nom)
	{
		exit(EXIT_FAILURE);
	}
	strcpy(nouv_produit->nom, nom);
	nouv_produit->prix = prix;
	nouv_produit->qte_stock = qte_stock;
	nouv_produit->categorie = categorie; 

	return nouv_produit;
}

void prd_free(t_produit* produit)
{
	free(produit->nom);
	free(produit);
}

void prd_afficher(t_produit* produit)
{
	printf("%s\t%.2lf$ (%d en stock) - Categorie #\n",
		produit->nom,
		produit->prix,
		produit->qte_stock);
		//produit->categorie->numero);
}