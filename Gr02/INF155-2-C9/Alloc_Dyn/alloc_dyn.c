
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int* un_ptr;
	//int valeur = 50; 
	//un_ptr = &valeur;


	printf("La taille d'un int est: %d\n", sizeof(int));

	un_ptr = (int*)malloc(sizeof(int));

	*un_ptr = 100;

	printf("Valeur a l'adresse: %d\n", *un_ptr);


	system("pause");
	return 0;
}