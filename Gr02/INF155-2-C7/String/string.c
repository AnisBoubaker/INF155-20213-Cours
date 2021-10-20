

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char chaine1[10] = { 'B', 'o', 'n', 'j', 'o', 'u', 'r' };
	char chaine2[6] = "Allo!"; //eq: {'A', 'l', 'l', 'o', '\0'}

	char* chaine3 = "Bienvenua!";

	printf("%s\n", chaine1);
	printf("%s\n", chaine2);

	chaine1[1] = 'i';

	printf("%s\n", chaine1);

	//PAS PERMIS
	//chaine1 = "Bienvenue"; //{'B', 'i', 'e', 'n' ....}

	printf("%s\n", chaine3);
	
	//PAS PARMIS: chaine3 est en lecture seule!
	//chaine3[8] = 'e';
	//printf("%s\n", chaine3);

	system("pause");
	return 0;
}