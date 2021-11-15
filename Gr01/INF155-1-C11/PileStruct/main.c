

#include <stdio.h>
#include <stdlib.h>

#include "t_coordonnee.h"
#include "t_pile.h"

int main(void)
{
	t_coordonnee* c1=NULL;
	t_coordonnee* c2 = NULL;
	t_coordonnee* c3 = NULL;
	t_pile* la_pile;

	c1 = t_coordonnee_init(100, 300);
	c2 = t_coordonnee_init(-100, 25);
	c3 = t_coordonnee_init(50, 10);
	la_pile = t_pile_init();

	//t_coordonnee_afficher(c1);
	//t_coordonnee_afficher(c2);

	//printf("La distance est: %.2lf\n", t_coordonnee_distance(c1, c2) );

	/*printf("La distance entre");
	t_coordonnee_afficher(c1); 
	printf(" et ");
	t_coordonnee_afficher(c2);
	printf(" est: %.2lf\n", t_coordonnee_distance(c1, c2));*/

	//printf("La distance entre (%.2lf, %.2lf) et (%.2lf, %.2lf) est: %.2lf\n", c1.x, c1.y, c2.x, c2.y, t_coordonnee_distance(c1, c2));


	/*printf("La distance entre %s et %s est: %.2lf\n",
		t_coordonnee_to_string(c1), 
		t_coordonnee_to_string(c2), 
		t_coordonnee_distance(c1, c2));


	t_coordonnee_free(c1);
	t_coordonnee_free(c2);*/


	t_pile_empiler(la_pile, c1);
	t_pile_empiler(la_pile, c2);
	t_pile_empiler(la_pile, c3);

	t_coordonnee* valeur_depilee;
	
	while (!t_pile_est_vide(la_pile))
	{
		valeur_depilee = t_pile_depiler(la_pile);
		t_coordonnee_afficher(valeur_depilee);
	}

	system("pause");
	return 0;
}