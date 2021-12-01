#include "mod_date.h"

int date_cmp(t_date date1, t_date date2)
{
	if (date1.annee != date2.annee)
	{
		return date1.annee - date2.annee;
	}
	if (date1.mois!=date2.mois)
	{
		return date1.mois - date2.mois;
	}
	return date1.jour - date2.jour;
}


int date_est_bissextile(int annee)
{
	return (annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0;
}

//Retourne le nombre maximal de jours du mois reçu, retourne 0 si le mois
//est invalide
int nb_jours_max(int mois, int annee)
{
	int nb_jours_max;
	switch (mois)
	{
	case JANVIER:
	case MARS:
	case MAI:
	case JUILLET:
	case AOUT:
	case OCTOBRE:
	case DECEMBRE:
		nb_jours_max = 31;
		break;
	case AVRIL:
	case JUIN:
	case SEPTEMBRE:
	case NOVEMBRE:
		nb_jours_max = 30;
		break;
	case FEVRIER:
		if (date_est_bissextile(annee))
		{
			nb_jours_max = 29;
		}
		else
		{
			nb_jours_max = 28;
		}
	default:
		nb_jours_max = 0;
	}
}

int date_set_date(t_date * date, int jour, int mois, int annee)
{
	int max_jour = nb_jours_max(mois, annee);
	if (!max_jour)
	{
		return 0;
	}
	if (jour<0 || jour > max_jour)
	{
		return 0;
	}
	date->jour = jour; 
	date->mois = mois; 
	date->annee = annee;
	return 1;
}