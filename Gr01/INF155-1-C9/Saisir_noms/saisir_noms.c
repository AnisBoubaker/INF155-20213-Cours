

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
char** saisir_noms(int* nb_personnes);

int main(void)
{
	char** noms;
	int nb_personnes; 

	noms = saisir_noms(&nb_personnes);
	if (noms == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < nb_personnes; i++)
	{
		printf("%s\n", noms[i]);
	}



	system("pause");
	return 0;
}

char** saisir_noms(int* nb_personnes)
{
	int nb;
	char** tab_noms;
	char tampon[255];
	
	printf("Nombre de personnes: ");
	scanf("%d", nb_personnes);
	do {} while (getchar() != '\n');

	tab_noms = (char**)malloc(sizeof(char*) * *nb_personnes);
	if (tab_noms == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < *nb_personnes; i++)
	{
		printf("Saisir le nom num. %d: ", i + 1);
		fgets(tampon, 255, stdin);
		tampon[strlen(tampon) - 1] = '\0';

		tab_noms[i] = (char*)malloc(sizeof(char) * ( strlen(tampon) + 1 ) );
		if (tab_noms[i] == NULL)
		{
			for (int j = 0; j < i ; j++)
			{
				free(tab_noms[j]);
			}
			free(tab_noms);
			return NULL;
		}
		strcpy(tab_noms[i], tampon);
		//strncpy(tab_noms[i], tampon, strlen(tampon) + 1);
	}

	return tab_noms;
}