#include "mod_machine.h"

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

int est_bissextile(int annee)
{
	return (annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0;
}

int nb_jours_mois(e_mois mois, int annee)
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