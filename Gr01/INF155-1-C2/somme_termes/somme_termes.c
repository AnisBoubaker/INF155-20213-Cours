/*
Illustration des boucles
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max; //Le terme maximal de la somme
	int courant = 1; //Le terme courant lors de la sommation
	int somme = 0; //Le résultat de la somme de la série

	printf("Saisir le terme maximal: ");
	scanf("%d", &max);

	while (courant <= max)
	{
		somme = somme + courant; 
		courant++;
	}

	printf("La somme des termes est: %d\n", somme);



	system("pause");
	return EXIT_SUCCESS;
}