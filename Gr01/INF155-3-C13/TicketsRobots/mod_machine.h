#ifndef MOD_MACHINE__H_
#define MOD_MACHINE__H_

#include <stdlib.h>
#include <string.h>
#include "mod_date.h"

typedef struct t_machine
{
	int num;
	char* num_modele;
	t_date date_mise_service;
	t_date date_maintenance; 
} t_machine;


/*
Alloue et initialise une nouvelle machine. Le num�ro de la machine et 
le num�ro de mod�le re�us en param�tres permettent d'initialiser les champs
num et num_modele.
ENTREES: 
num (chaine): num�ro de la machine dans le parc
num_modele (chaine): le num�ro de mod�le de la nouvelle machine
SORTIE: 
Une r�f�rence vers la nouvelle machine allou�e avec les champs num et num_modele
initialis�s. Les dates de mise en service et de maintenance seront les dates 
nulles (0-0-0). En cas d'erreur d'allocation m�moire, la fonction retourne NULL.
*/
t_machine* machine_init(const char* num_modele);

/*
Lib�re l'espace m�moire d'une machine. 
ENTREES: 
machine (r�f�rence vers une machine): la machine � lib�rer
SORTIE: 
Aucune. 
*/
void machine_free(t_machine* machine);



/*
Identifie toutes les machines qui doivent subir une op�ration de maintenance. 
Ces machines sont celles dont la date de derni�re maintenance est nulle (0-0-0)
ou celles dont la date de derni�re maintenance est ant�rieure � une date_min.
ENTREES: 
- liste_machines: Tableau de r�f�rences des machines du parc
- nb_machines: nombre de machines dans le tableau liste_machines
- date_min: Date minimale
SORTIE: 
Tableau dynamique de r�f�rences vers des machines qui doivent �tre maintenues.
*/
t_machine** machines_a_maintenir(t_machine* liste_machines[], int nb_machines, t_date date_min);

/*
*/

#endif