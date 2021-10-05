/*
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double moyenne(double notes[], int nb_notes);


int main(void)
{

	double notes[50] = {50, 78, 67, 55}; 
	//Intitialiser un tab à 0 partout: 
	double notes_tp1[10] = { 0 };
	//Initialiser un tab à 1 partout: 
	double un_tab[10] = { 1, 1, 1, 1, 1, 1, 1,1, 1, 1 };
	int tab2[1000]; 
	
	int somme; 

	for (int i = 0; i < 1000; i++)
	{
		tab2[i] = 1;
	}
	
	
	printf("La moyenne est: %lf\n", moyenne(notes, 4) );


	//notes[3] = 89;

	printf("La case ayant l'indice 3 contient: %lf\n", notes[3]);
	printf("La case ayant l'indice 9 contient: %lf\n", notes[9]);

	system("pause");
	return 0;
}


double moyenne(double notes[], int nb_notes)
{
	double somme = 0; 

	for (int i = 0; i < nb_notes; i++) 
	{
		somme += notes[i];
	}
	return somme / nb_notes;
}