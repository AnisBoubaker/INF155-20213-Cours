
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int main(void)
{
	char ch1[TAILLE_MAX];
	char ch2[TAILLE_MAX] = "Bonjour tout le monde!";
	char copie_ch2[TAILLE_MAX];
	char ch3[TAILLE_MAX] = "Bonjour!";

	printf("Saisir une chaine: ");
	//scanf("%s", ch1);
	fgets(ch1, TAILLE_MAX, stdin);
	ch1[ strlen(ch1) - 1 ] = '\0';
	printf("Chaine saisie: %s\n", ch1);

	//COPIE
	strcpy(copie_ch2, ch2);
	printf("Copie de chaine2: %s\n", copie_ch2);

	//Changer le contenu d'une chaine
	strncpy(ch3, "Allo!", TAILLE_MAX);
	printf("chaine3: %s\n", ch3);

	system("pause");
	return 0;
}