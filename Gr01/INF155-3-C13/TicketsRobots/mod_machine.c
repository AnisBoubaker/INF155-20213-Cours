#define _CRT_SECURE_NO_WARNINGS
#include "mod_machine.h"


t_machine* machine_init(const char* num_modele)
{
	static int num = 1; 
	t_machine* nouv_machine; 

	nouv_machine = (t_machine*)malloc(sizeof(t_machine));
	if (!nouv_machine)
	{
		return NULL;
	}

	nouv_machine->num = num;

	nouv_machine->num_modele = (char*)malloc(sizeof(char) * (strlen(num_modele) + 1));
	if (nouv_machine->num_modele == NULL)
	{
		free(nouv_machine);
		return NULL;
	}
	strcpy(nouv_machine->num_modele, num_modele);
	nouv_machine->date_mise_service.jour = 0;
	nouv_machine->date_mise_service.mois = 0;
	nouv_machine->date_mise_service.annee = 0;
	nouv_machine->date_maintenance.jour = 0;
	nouv_machine->date_maintenance.mois = 0;
	nouv_machine->date_maintenance.annee = 0;
	
	num++;

	return nouv_machine;
}

void machine_free(t_machine* machine)
{
	free(machine->num_modele);
	free(machine);
}

void machine_afficher(const t_machine* machine)
{
	printf("Num: %d\n", machine->num);
	printf("Modele: %s\n", machine->num_modele);
	printf("Mise en service: %d-%d-%d\n",
		machine->date_mise_service.jour,
		machine->date_mise_service.mois,
		machine->date_mise_service.annee);
	printf("Derniere maintenance: %d-%d-%d\n",
		machine->date_maintenance.jour,
		machine->date_maintenance.mois,
		machine->date_maintenance.annee);
}



t_machine** machines_a_maintenir(const t_machine* liste_machines[], int nb_machines, t_date date_min, int* nb_a_maintenir)
{
	t_machine** machines_a_maintenir;
	
	*nb_a_maintenir = 0;

	machines_a_maintenir = (t_machine**)malloc(sizeof(t_machine*) * nb_machines);
	if (!machines_a_maintenir)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < nb_machines; i++)
	{
		if (date_cmp(liste_machines[i]->date_maintenance, date_min) < 0)
		{
			machines_a_maintenir[*nb_a_maintenir] = liste_machines[i];
			(*nb_a_maintenir)++;
		}
	}
	machines_a_maintenir = (t_machine**)realloc(machines_a_maintenir, sizeof(t_machine*) * (*nb_a_maintenir));
	if (!machines_a_maintenir)
	{
		exit(EXIT_FAILURE);
	}

	return machines_a_maintenir;
}