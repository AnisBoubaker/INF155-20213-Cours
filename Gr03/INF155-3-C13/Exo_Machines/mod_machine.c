#include "mod_machine.h"

t_machine* machine_init(int num, const char* num_modele)
{
	t_machine* nouv_machine; 

	nouv_machine = (t_machine*)malloc(sizeof(t_machine));
	if (!nouv_machine)
	{
		return NULL;
	}

	nouv_machine->num = num;

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