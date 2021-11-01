
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int* un_ptr = NULL;

	int notes[40];
	int nb_notes;
	int* notes_dyn; 


	//int valeur = 50;
	//un_ptr = &valeur;

	printf("Le type int necessite %d octets.\n", sizeof(int));
	un_ptr = (int*)malloc( sizeof(int) );
	
	printf("Nombre de notes? ");
	scanf("%d", &nb_notes);

	notes_dyn = (int*)malloc(sizeof(int) * nb_notes);

	



	/*
	*(notes_dyn + 0) = 10;
	*(notes_dyn + 1) = 20;
	*(notes_dyn + 2) = 30;
	*/
	notes_dyn[0] = 10;
	notes_dyn[1] = 20;
	notes_dyn[2] = 30;

	for (int i = 0; i < nb_notes ; i++)
	{
		printf("Saisir la note #%d: ", i + 1);
		scanf("%d", &(notes_dyn[i]) );
	}

	for (int i = 0; i < nb_notes; i++)
	{
		printf("Note #%d: %d\n", i + 1, notes_dyn[i]);
	}

	
	*un_ptr = 10; 

	printf("Contenur a l'adresse: %d\n", *un_ptr);

	//Libérer l'espace mémoire alloué par malloc
	free(notes_dyn);

	notes_dyn = NULL;


	system("pause");
	return 0;
}