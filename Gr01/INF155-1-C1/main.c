/*
Mon premier programme en langage C
qui ne fait pas grand chose!
Auteur: Anis Boubaker
Date: 2021-08-30
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
	int age;
	double salaire; 
	int nb_etudiants; 
	int nb_credits; 
	char note;


	age = 200 ;

	//age = 50;
	//age = age * 2;


	printf("Hello World!\nJ'ai %d ans\n\n", age/2); //Affiche Hello World!
	
	nb_etudiants = 35;
	nb_credits = 4;
	printf("INF155, %d etudiants, %d credits\n\n", nb_etudiants, nb_credits);
	
	note = 'A';
	
	printf("La note est: %c\n", note);
	printf("La note est: %d\n", note);

	note = 'A' + 2;

	printf("La note est: %d\n", note);
	printf("La note est: %c\n", note);

	system("pause");

	int une_autre_variable;
}