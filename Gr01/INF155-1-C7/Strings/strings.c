#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//char chaine1[100] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	char chaine1[100] = "Bonjour";

	char* chaine2 = "Allo!";


	//RAPPEL: Pas permis!!
	//chaine1 = { 'B', 'i', 'n', 'j', 'o', 'u', 'r' };
	//chaine1 = "Binjour";

	// Binjour
	printf("Chaine 1: %s\n", chaine1);

	printf("Chaine 2: %s\n", chaine2);
	//Pas permis
	//chaine2[3] = 'i';
	chaine2 = "Alli";
	printf("Chaine 2: %s\n", chaine2);

	system("pause");
	return 0;
}

