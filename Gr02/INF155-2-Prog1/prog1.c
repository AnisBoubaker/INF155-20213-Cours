/*
Programme HelloWorld!
Auteur: Anis Boubaker
Date: 2021-09-03
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double salaire = 0;
	int num_etudiant;
	char note;

	num_etudiant = 1235;

	num_etudiant = 1235 + 5;

	num_etudiant = num_etudiant + 'A';

	
	salaire = 20000.50;
	printf("L'etudiant num %d gagne %.2lf $.\n",num_etudiant, salaire);

	note = 'A'+5;

	printf("L'etudiant a obtenu la note: %c \n", note);
	
	

	//printf("Hello World!\n\n\nBonjour le monde!\n");

	system("pause"); //Marquer une pause
	return EXIT_SUCCESS;
}