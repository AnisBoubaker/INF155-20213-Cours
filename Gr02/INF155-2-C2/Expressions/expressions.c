/*
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a; 
	int b =3; 
	double resultat; 

	printf("Saisir la valeur de a: ");
	scanf("%d", &a);

	//a++; //a = a+1;
	if ( a == 10) 
	{
		printf("Vous avez saisi la valeur 10!\n");
	}

	printf("Voici la valeur de a: %d\n", a);

	resultat = a < b ;
	//printf("La valeur de a est: %d\n", a);
	printf("resultat = %lf\n", resultat);


	system("pause");
	return EXIT_SUCCESS;
}