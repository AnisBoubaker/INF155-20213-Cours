
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mod_categorie.h"
#include "mod_produit.h"
#include <string.h>

#define MAX_PRODUITS 1000
#define MAX_CATEGORIES 100

int main(void)
{
	t_produit* produits[MAX_PRODUITS];
	t_categorie* categories[MAX_CATEGORIES];
	int nb_categories = 0; 
	int nb_produits = 0;

	/*categories[0] = cat_init("Produits en canne", 10);
	nb_categories++;
	categories[1] = cat_init("Produits frais", 20);
	nb_categories++;

	produits[0] = prd_init("Soupe a l'oignon", 5.50, 120, categories[0]);
	nb_produits++;
	produits[1] = prd_init("Pois chiches", 3.00, 80, categories[0]);
	nb_produits++;
	produits[2] = prd_init("Tomates", 4.00, 30, categories[1]);
	nb_produits++;
	produits[3] = prd_init("Laitue", 3.50, 30, categories[1]);
	nb_produits++;
	produits[4] = prd_init("Oignons", 2.00, 30, categories[1]);
	nb_produits++;


	prd_free(produits[1]);
	for (int i = 1; i < nb_produits - 1; i++)
	{
		produits[i] = produits[i + 1];
	}
	nb_produits--;


	printf("*** LISTE DES CATEGORIES ***\n");
	for (int i = 0; i < nb_categories; i++)
	{
		cat_afficher(categories[i]);
	}
	printf("\n\n*** LISTE DES PRODUITS ***\n");
	for (int i = 0; i < nb_produits; i++)
	{
		prd_afficher(produits[i]);
	}


	FILE* mon_fichier;

	mon_fichier = fopen("produits.txt", "w");
	
	for (int i = 0; i < nb_produits; i++)
	{
		fprintf(mon_fichier, "%.2lf %d %d %s\n",
			produits[i]->prix,
			produits[i]->qte_stock,
			produits[i]->categorie->numero,
			produits[i]->nom);
	}
	

	fclose(mon_fichier);*/

	FILE* mon_fichier;
	mon_fichier = fopen("produits.txt", "r");

	produits[0] = prd_init("Toto                               ", 0, 0, NULL);
	fscanf(mon_fichier, "%lf", &(produits[0]->prix));
	fscanf(mon_fichier, "%d", &(produits[0]->qte_stock));
	//fscanf(mon_fichier, "%s", produits[0]->nom);
	fgets(produits[0]->nom, 100, mon_fichier);
	//éliminer le \n
	produits[0]->nom[strlen(produits[0]->nom) - 1] = '\0';

	prd_afficher(produits[0]);
	
	system("pause");
	return 0;
}