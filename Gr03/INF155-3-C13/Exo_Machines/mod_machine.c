#include "mod_machine.h"

t_machine* machine_init( const char* num_modele)
{
	static int prochain_num = 1;

	t_machine* nouv_machine; 

	nouv_machine = (t_machine*)malloc(sizeof(t_machine));
	if (!nouv_machine)
	{
		return NULL;
	}

	nouv_machine->num = prochain_num;
	prochain_num++;

	nouv_machine->num_modele = (char*)malloc(sizeof(char) * (strlen(num_modele)+1));
	strcpy(nouv_machine->num_modele, num_modele);

	nouv_machine->date_mise_service.jour = 0; 
	nouv_machine->date_mise_service.mois = 0;
	nouv_machine->date_mise_service.annee = 0;

	nouv_machine->date_maintenance.jour = 0;
	nouv_machine->date_maintenance.mois = 0;
	nouv_machine->date_maintenance.annee = 0;

	return nouv_machine;
}


void machine_free(t_machine* machine) 
{
	free(machine->num_modele);
	free(machine);
}

void machine_afficher(t_machine* m)
{
	printf("MACHINE #%d\n", m->num);
	printf("Modele: %s, Mise en service: %d-%d-%d, Derniere maintenance: %d-%d-%d\n",
		m->num_modele,
		m->date_mise_service.jour, m->date_mise_service.mois, m->date_mise_service.annee,
		m->date_maintenance.jour, m->date_maintenance.mois, m->date_maintenance.annee
	);
}

t_machine** machines_a_maintenir(t_machine* liste_machines[], int nb_machines, t_date date_min, int* nb_maintenir)
{
	t_machine** tab_machines;
	*nb_maintenir = 0;

	tab_machines = (t_machine**)malloc(sizeof(t_machine*) * nb_machines);
	if(!tab_machines)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < nb_machines; i++)
	{
		if (date_cmp(liste_machines[i]->date_maintenance, date_min)<=0) 
		{
			tab_machines[*nb_maintenir] = liste_machines[i];
			(*nb_maintenir)++;
		}
	}

	return tab_machines;
}