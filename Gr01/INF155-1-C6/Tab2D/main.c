/*


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "tab2d.h"




int main(void)
{
	int tab1d[10] = {10, 4, 5, 6, 7, 100};

	int tab2d[4][MAX_COLS] = { {5, 3, 2}, {10, 12, 11, 10}, {3, 8, 5} };
	int tab2d_bis[4][5] = { 0 }; //Initialisation à 0 de toutes les cases.

	double mesures[3][MAX_COLS] = { {20.5, 20, 21, 19}, {33, 34, 29, 18}, {25, 26.5, 28, 27} };
	double moyennes[3];

	afficher_tab2d(tab2d, 4, 5);


	moyenne_temperatures(mesures, 3, 4, moyennes);

	for (int i = 0; i < 3; i++)
	{
		printf("Moyenne du jour %d: %lf\n", i, moyennes[i]);
	}
	
	printf("Affichage du tableau de mesures: \n");
	


	/*tab2d[1][3] = 10; 

	printf("La case 1,3 contient: %d\n", tab2d[1][3]);
	*/



	system("pause");
	return 0;
}

