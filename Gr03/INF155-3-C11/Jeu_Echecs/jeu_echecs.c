



#include <stdio.h>
#include <stdlib.h>
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
	p1->y = 50;

	p2->x = 25; 
	p2->y = 30;

	p3->x = 10;
	p3->y = 6;

	point_afficher(p1);
	point_afficher(p2);

	printf("La distance: %.2lf\n", point_distance(p1, p2));


	pile_empiler(la_pile, p1);
	pile_empiler(la_pile, p2);
	pile_empiler(la_pile, p3);

	printf("\nCONTENU DE LA PILE: \n");
	while (!pile_vide(la_pile))
	{
		t_point* point_depile;

		point_depile = pile_depiler(la_pile);

		point_afficher(point_depile);

	}



	point_free(p1);
	point_free(p2);
	pile_free(la_pile);

	system("pause");
	return 0;
}