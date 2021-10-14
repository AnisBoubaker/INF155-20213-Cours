

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char chaine1[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	char chaine2[] = "le monde!"; //eq: {'l','e',' ','m','o','n','d','e','!','\0'}

	char* chaine3 = "Bonjour tout le monde!";

	//Interdit!!
	//chaine3[2] = 'L';

	chaine3 = "Bonjour les amis!";


	//*(chaine2 + 1) = 'a';
	chaine2[1] = 'a';

	//PAS PERMIS!!
	//chaine2 = "tout le monde!";

	printf("%s %s\n", chaine1, chaine2);
	printf("chaine3: %s\n", chaine3);

	system("pause");
	return 0;
}