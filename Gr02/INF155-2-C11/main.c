
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_point.h"
#include "mod_pile.h"

int main(void)
{
	t_point* p1;
	t_point* p2;
	t_point* p3;

	t_pile* la_pile;
	

	p1 = point_init();
	p2 = point_init();
	p3 = point_init();

	la_pile = pile_init();

	p1->x = 100;
	p1->y = 35;
	strcpy(p1->nom, "Depart");

	p2->x = 0;
	p2->y = 0;
	strcpy(p2->nom, "Origine");

	p3->x = 45;
	p3->y = -30;
	strcpy(p3->nom, "Destination");

	pile_empiler(la_pile, p1);
	pile_empiler(la_pile, p2);
	pile_empiler(la_pile, p3);

	while (!pile_vide(la_pile))
	{
		t_point* pt_depile;

		pt_depile = pile_depiler(la_pile);

		point_afficher(pt_depile);
	}

	/*point_afficher(p1);
	point_afficher(p2);
	printf("La distance est: %.2lf\n", point_distance(p1, p2) );*/

	/*printf("La distance entre %s et %s est de %.2lf\n",
		point_to_string(p1),
		point_to_string(p2),
		point_distance(p1, p2));*/

	point_free(p1);
	point_free(p2);

	system("pause");
	return 0;
}