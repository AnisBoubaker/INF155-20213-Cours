/*
EXERCICE: 
�crire la fonction ***coller_chaines*** qui re�oit trois chaines de 
caract�res en param�tre: `chaine1`, `chaine2` et `resultat`. Votre fonction 
doit coller les deux chaines de caract�res pour former une chaine globale 
constitu�e de `chaine1` puis `chaine2`. La chaine de caract�res r�sultante 
sera stock�e dans la chaine `resultat`.

**Note:** Vous devez vous assurer que `chaine1` et `chaine2` ne puissent pas 
�tre modifi�es dans la fonction.
*/

#include <stdio.h>
#include <stdlib.h>

void coller_chaines(char ch1[], char ch2[], char resultat[]);

int main(void)
{
	char chaine1[] = "INF";
	char chaine2[] = "155";
	char resultat[100];

	coller_chaines(chaine1, chaine2, resultat);

	printf("%s\n", resultat);


	system("pause");
	return 0;
}


void coller_chaines(const char ch1[], const char ch2[], char resultat[])
{
	int i = 0; 
	int j = 0; 
	char* ch1_copie = ch1;


	while (ch1[i] != '\0')
	{
		resultat[i] = ch1[i];
		i++;
	}
	while (ch2[j] != '\0')
	{
		resultat[i] = ch2[j];
		i++;
		j++;
	}
	resultat[i] = '\0';
}