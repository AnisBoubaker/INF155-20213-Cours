#include "mod_date.h"

/* DECLARATION DES PROTOTYPES PRIVES*/
static int est_bissextile(int annee);
static int nb_jours_mois(e_mois mois, int annee);



int date_cmp(t_date date1, t_date date2)
{
	if (date1.annee != date2.annee)
	{
		return date1.annee - date2.annee;
	}
	if (date1.mois != date2.mois)
	{
		return date1.mois - date2.mois;
	}
	return date1.jour - date2.jour;
}

static int est_bissextile(int annee)
{
	return (annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0;
}

static int nb_jours_mois(e_mois mois, int annee)
{
	int nb_jours;
	switch (mois)
	{
	case FEVRIER:
		if (est_bissextile(annee))
		{
			nb_jours = 29;
		}
		else
		{
			nb_jours = 28;
		}
		break;
	case JANVIER:
	case MARS:
	case MAI:
	case JUILLET:
	case AOUT:
	case OCTOBRE:
	case DECEMBRE:
		nb_jours = 31;
		break;
	case AVRIL:
	case JUIN:
	case SEPTEMBRE:
	case NOVEMBRE:
		nb_jours = 30;
		break;
	default:
		nb_jours = 0;
	}
	return nb_jours;
}

int date_set_date(t_date* date, int jour, e_mois mois, int annee)
{
	int max_jours = nb_jours_mois(mois, annee);

	if (max_jours == 0 || jour<1 || jour>max_jours)
	{
		return 0;
	}
	date->jour = jour; 
	date->mois = mois; 
	date->annee = annee;
	return 1;
}