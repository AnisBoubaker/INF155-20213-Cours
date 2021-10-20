

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int main(void)
{
	char chaine1[TAILLE_MAX] = "Bonjour le monde!";
	char chaine2[TAILLE_MAX];
	char chaine3[TAILLE_MAX] = "J'aime le langage C!";
	char copie_chaine3[TAILLE_MAX];

	char nom_fichier[TAILLE_MAX];
	char extension[TAILLE_MAX] = ".txt";

	int cpt = 0;

	while (chaine1[cpt] != '\0')
	{
		cpt++;
	}

	//STRLEN
	printf("La chaine fait: %d caracteres.\n", cpt);
	printf("La chaine fait: %d caracteres.\n", strlen(chaine1) );

	//SCANF
	printf("Saisir un nom de fichier: ");
	//scanf("%s", chaine2); //Attention: pas de & car chaine2 est une adresse

	fgets(chaine2, TAILLE_MAX, stdin);
	chaine2[ strlen(chaine2) - 1 ] = '\0';

	printf("Nom de fichier: %s\n", chaine2);


	strcpy(copie_chaine3, chaine3);
	printf("%s\n", copie_chaine3);

	//Pas permis
	//chaine1 = "Bonjour tout le monde!"
	//Alternative: 
	strncpy(chaine1, "Bonjour tout le monde!",TAILLE_MAX);
	printf("Chaine1 modifiee: %s\n", chaine1);

	strncpy(nom_fichier, "grille10", TAILLE_MAX);
	strncat(nom_fichier, extension, TAILLE_MAX);
	printf("Nouveau nom de fichier: %s\n", nom_fichier);

	system("pause");
	return 0;
}