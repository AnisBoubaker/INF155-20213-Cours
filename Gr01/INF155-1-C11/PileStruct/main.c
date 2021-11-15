

#include <stdio.h>
#include <stdlib.h>

#include "t_coordonnee.h"

int main(void)
{
	t_coordonnee* c1=NULL;
	t_coordonnee* c2 = NULL;

	c1 = t_coordonnee_init();
	c2 = t_coordonnee_init();

	c1->x = 100;
	c1->y = 300;

	c2->x = -100;
	c2->y = 25;

	t_coordonnee_afficher(c1);
	t_coordonnee_afficher(c2);

	//printf("La distance est: %.2lf\n", t_coordonnee_distance(c1, c2) );

	/*printf("La distance entre");
	t_coordonnee_afficher(c1); 
	printf(" et ");
	t_coordonnee_afficher(c2);
	printf(" est: %.2lf\n", t_coordonnee_distance(c1, c2));*/

	//printf("La distance entre (%.2lf, %.2lf) et (%.2lf, %.2lf) est: %.2lf\n", c1.x, c1.y, c2.x, c2.y, t_coordonnee_distance(c1, c2));


	printf("La distance entre %s et %s est: %.2lf\n",
		t_coordonnee_to_string(c1), 
		t_coordonnee_to_string(c2), 
		t_coordonnee_distance(c1, c2));


	t_coordonnee_free(c1);
	t_coordonnee_free(c2);


	system("pause");
	return 0;
}