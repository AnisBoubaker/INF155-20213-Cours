
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mod_produit.h"
#include "mod_categorie.h"

#define NB_MAX_PRODUITS 1000
#define NB_MAX_CATEGORIES 100

int main(void)
{
	t_produit* liste_produits[NB_MAX_PRODUITS];
	 

	t_categorie* c1;

	c1 = cat_init();
	cat_set_nom(c1, "Produits en canne");
	c1->num = 10;

	/*liste_produits[0] = prd_init();
	prd_set_nom(liste_produits[0], "Soupe a l'oignon");
	liste_produits[0]->categorie = c1;
	liste_produits[0]->prix = 5;
	liste_produits[0]->qte_stock = 100;

	liste_produits[1] = prd_init();
	prd_set_nom(liste_produits[1], "Pois chiches");
	liste_produits[1]->categorie = c1;
	liste_produits[1]->prix = 3.5;
	liste_produits[1]->qte_stock = 75;

	cat_set_nom(c1, "Produits en boite");

	for (int i = 0; i < 2; i++)
	{
		prd_afficher(liste_produits[i]);
	}*/

	FILE* mon_fichier;
	char chaine_lue[1000];

	mon_fichier = fopen("liste_produits.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("Erreur de creation du fichier!\n");
		exit(EXIT_FAILURE);
	}

	/*while (fgets(chaine_lue, 1000, mon_fichier))
	{
		printf("%s", chaine_lue);
	}*/

	double prix; 
	int qte; 
	int num_categorie;
	char nom_produit[100];

	liste_produits[0] = prd_init();
	

	fscanf(mon_fichier, "%lf", &(liste_produits[0]->prix));
	fscanf(mon_fichier, "%d", &(liste_produits[0]->qte_stock));
	fscanf(mon_fichier, "%d", &num_categorie);
	//S'arrete à un espace!
	//fscanf(mon_fichier, "%s", nom_produit);
	fgets(nom_produit, 100, mon_fichier);
	nom_produit[strlen(nom_produit) - 1] = '\0';

	prd_set_nom(liste_produits[0], nom_produit);

	liste_produits[0]->categorie = c1;

	/*printf("Prix: %.2lf, Quantite: %d, Categorie: %d, Nom: %s\n",
		prix, qte, num_categorie, nom_produit);*/

	prd_afficher(liste_produits[0]);

	fclose(mon_fichier);

	/*mon_fichier = fopen("liste_produits.txt", "w");
	if (mon_fichier == NULL)
	{
		printf("Erreur de creation du fichier!\n");
		exit(EXIT_FAILURE);
	}

	//prix qte_stock num_categorie nom_produit
	for (int i = 0; i < 2; i++)
	{
		fprintf(mon_fichier, "%.2lf %d %d %s\n",
			liste_produits[i]->prix,
			liste_produits[i]->qte_stock,
			liste_produits[i]->categorie->num,
			liste_produits[i]->nom
		);
	}

	fclose(mon_fichier);*/

	system("pause");
	return EXIT_SUCCESS;
}