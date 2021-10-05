

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int une_var; 
	int taille_max = 40;
	int notes[10] = {60, 78, 90, 65, 79};
	int valeurs[500] = {1};

	for (int i = 0; i < 500; i++)
	{
		valeurs[i] = 1;
	}


	int indice = 9;
	

	printf("La valeur a lindice %d: %d\n",indice, notes[indice]);
	
	

	system("pause");
	return 0;
}