/*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

	int x, y;
	int resultat; 
	int nb_etudiants; 

	x = 11;
	y = 3;

	nb_etudiants = 40; 
	if (nb_etudiants == 30) 
	{
		printf("La condition est vraie!\n");
	}
	resultat = nb_etudiants < 40;

	printf("x vaut: %d\n", x);
	printf("La valeur de resultat: %d\n", resultat);

	/*x = 10.0; 
	y = 3;

	resultat = (double)x / y;
	*/
	

	system("pause");
	return EXIT_SUCCESS;
}