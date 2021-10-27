
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int* un_ptr = NULL;
	//int valeur = 10; 
	//un_ptr = &valeur;

	un_ptr = (int*)malloc(sizeof(int));
	if (un_ptr == NULL) //Toujours vérifier si l'allocation a fonctionné
	{
		printf("Erreur d'allocation memoire!\n");
		return EXIT_FAILURE;
	}

	*un_ptr = 50;

	printf("Valeur a l'adresse allouee: %d\n", *un_ptr);

	//Important: libérer la mémoire allouée dynamiquement quand on l'utilise plus
	free(un_ptr);
	un_ptr = NULL;

	printf("La taille d'un entier est: %d\n", sizeof(int));


	system("pause");
	return 0;
}