
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mod_categorie.h"
#include "mod_produit.h"

#define MAX_PRODUITS 1000

int main(void)
{
	t_categorie* cat1;
	t_produit* produits[MAX_PRODUITS];

	cat1 = cat_init();
	cat_set_nom(cat1, "Produits en conserve");
	cat1->numero = 10;

	/*produits[0] = prd_init();
	prd_set_nom(produits[0], "Soupe a l'oignon");
	produits[0]->prix = 5;
	produits[0]->qte_stock = 50;
	produits[0]->categorie = cat1;

	produits[1] = prd_init();
	prd_set_nom(produits[1], "Pois chiches");
	produits[1]->prix = 3.5;
	produits[1]->qte_stock = 89;
	produits[1]->categorie = cat1;

	prd_afficher(produits[0]);
	prd_afficher(produits[1]);

	cat_set_nom(cat1, "Produits en canne");

	prd_afficher(produits[0]);
	prd_afficher(produits[1]);

	FILE* fichier_produits; 
	fichier_produits = fopen("liste_produits.txt", "w");
	if (fichier_produits == NULL)
	{
		printf("Erreur d'ouverture de fichier!\n");
		exit(EXIT_FAILURE);
	}

	// Ecrire le contenu de mes produits 
	//Prix Qte_en_stock num_categorie nom
	for (int i = 0; i < 2; i++)
	{
		fprintf(fichier_produits, "%.2lf %d %d %s\n",
			produits[i]->prix,
			produits[i]->qte_stock,
			produits[i]->categorie->numero,
			produits[i]->nom
		);
	}
	fclose(fichier_produits);*/

	FILE* fichier_produits; 

	fichier_produits = fopen("liste_produits.txt", "r");
	if (fichier_produits == NULL)
	{
		printf("Fichier inexistant!\n");
		exit(EXIT_FAILURE);
	}

	char buffer[1000];
	produits[0] = prd_init();
	produits[0]->categorie = cat1;
	fscanf(fichier_produits, "%lf", &(produits[0]->prix));
	fscanf(fichier_produits, "%d", &(produits[0]->qte_stock));
	fscanf(fichier_produits, "%d", &(produits[0]->categorie->numero));
	//S'arrete a l'espace!!
	//fscanf(fichier_produits, "%s", buffer);
	fgets(buffer, 1000, fichier_produits);
	buffer[strlen(buffer) - 1] = '\0';
	prd_set_nom(produits[0], buffer);

	prd_afficher(produits[0]);

	/*
	char buffer[1000];
	while (fgets(buffer, 1000, fichier_produits))
	{
		printf("%s", buffer);
	}*/
	


	//Lire le contenu


	fclose(fichier_produits);

	system("pause");
	return EXIT_SUCCESS;
}