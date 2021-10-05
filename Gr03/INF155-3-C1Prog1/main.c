/*
Programme qui affiche Hello World!
Auteur: Anis Boubaker
Date: 2020-09-01
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//printf("Hello World!\n\n\n");
	/*double pi = 3.1415;
	double rayon; 
	double circonference; 

	rayon = 4.0;
	circonference = 2 * pi * rayon;

	printf("Le rayon est %lf\n\n", rayon);
	printf("La circonference est %lf\n\n", circonference);
	*/
	char note; 
	int num_etudiant = 1009;

	note = 'A'+2;
	
	printf("L'etudiant %d a la note: %d\n",num_etudiant, note);

	
	system("pause");

	return EXIT_SUCCESS;
}