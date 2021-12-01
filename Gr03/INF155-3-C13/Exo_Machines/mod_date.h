#ifndef MOD_DATE__H_
#define MOD_DATE__H_

typedef enum t_mois {JANVIER=1, FEVRIER, MARS, AVRIL, MAI, JUIN, JUILLET, AOUT, 
					SEPTEMBRE, OCTOBRE, NOVEMBRE, DECEMBRE} t_mois;


typedef struct t_date
{
	int jour;
	t_mois mois;
	int annee;
} t_date;

/*
Fonction qui compare deux dates
ENTREES:
date1: premi�re date � comparer
date2: seconde date � comparer
SORTIE(int):
>0 si date1 est plus r�cente que date2
<0 si date1 est ant�rieure � date2
0 si date1 et date2 sont identiques.
*/
int date_cmp(t_date date1, t_date date2);

/*
Retourne une date dont les composantes sont re�ues en param�tre. La
fonction v�rifie la validit� de la date: les jours ne peuvent �tre <1 ou
>31, en s'assurant que �a correspondent au mois. Les ann�es sont bissextiles
si elle est:
- Divisible par 4 mais pas par 100
OU
- Divisble par 400.
ENTREES:
- date: R�f�rence vers la date � d�finir
- Les composantes d'une date: jour, mois et ann�e
SORTIE:
Valeur vraie si la date a bien �t� modifi�e, valeur fausse sinon (en cas
d'erreur)
*/
int date_set_date(t_date* date, int jour, int mois, int annee);

#endif