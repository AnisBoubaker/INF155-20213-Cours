#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAILLE_MAX 100

int main(void)
{
	char chaine1[TAILLE_MAX] = "Bonjour!";
	char chaine_lue[TAILLE_MAX];
	char copie[TAILLE_MAX];

	char chaine_p1[TAILLE_MAX] = "Bonjour ";
	char chaine_p2[TAILLE_MAX] = "tout le monde!";

	

	printf("Chaine1 contient %d caracteres.\n", strlen(chaine1) );

	printf("Saisir le nom du fichier: ");
	//scanf("%s", chaine_lue); //Attention: pas de & ici!!!
	fgets(chaine_lue, TAILLE_MAX, stdin);
	chaine_lue[ strlen(chaine_lue) - 1 ] = '\0';

	printf("Nom du fichier: %s\n", chaine_lue);
	
	strcpy(copie, chaine1);
	printf("La copie contient: %s\n", copie);

	//Interdit
	//chaine1 = "Bonjour tout le monde!";
	//Faire plutôt: 
	strncpy(chaine1, "Bonjour tout le monde!", TAILLE_MAX);
	printf("Nouveau contenu de chaine1: %s\n", chaine1);

	//Concaténer deux chaines de caractères
	strncat(chaine_p1, chaine_p2, TAILLE_MAX);
	printf("chaine_p1 contient: %s\n", chaine_p1);


	char ch1[TAILLE_MAX] = "Bonjour";
	char ch2[TAILLE_MAX] = "fois";
	char ch_resultat[TAILLE_MAX];
	int nb = 10;

	sprintf(ch_resultat, "%s %d %s!", ch1, nb, ch2);
	printf("Chaine resultat contient: %s\n", ch_resultat);

	system("pause");
	return 0;
}