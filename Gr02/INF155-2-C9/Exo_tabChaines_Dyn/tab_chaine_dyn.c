#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Écrire une fonction *saisir_noms* qui demande à l'usager le nombre de personnes et 
qui lui demande de saisir le nom de chacune des personnes. La fonction retourne un 
tableau dynamique contenant les noms des personnes saisies.

**Note:** Vous supposerez que le nom le plus long fait 255 caractères.
**Note2:** Ne pas allouer plus de mémoire que nécessaire!
*/
char** saisir_nom(int* nb_personnes);

int main(void)
{
	int nb_personnes; 
	char** liste_noms; 

	liste_noms = saisir_nom(&nb_personnes);


	for (int i = 0; i < nb_personnes; i++)
	{
		printf("%s \n", liste_noms[i]);
	}

	system("pause");
	return 0;
}

char** saisir_nom(int* nb_personnes)
{
	char** noms;
	char buffer[256];

	printf("Nombre de personnes: ");
	scanf("%d", nb_personnes);

	do {} while (getchar() != '\n');

	noms = (char**)malloc(sizeof(char*) * *nb_personnes);
	if (noms == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < *nb_personnes; i++)
	{
		printf("Nom #%d: ", i + 1);
		fgets(buffer, 255, stdin);
		buffer[strlen(buffer) - 1] = '\0';

		noms[i] = (char*)malloc(sizeof(char) * (strlen(buffer) + 1) );
		if (noms[i] == NULL)
		{
			exit(EXIT_FAILURE);
		}

		strcpy(noms[i], buffer);
	}

	return noms;

}