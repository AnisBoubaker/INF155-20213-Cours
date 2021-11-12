

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u_int;

#define TAILLE_MAX 100
#define TAILLE_MAX_CODE_PERM 13

typedef struct etudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_MAX_CODE_PERM];
	double note_tp1; 
	double note_tp2;
	double note_tp3;
	double note_intra1;
	double note_intra2;
	double note_final;
} t_etudiant;

//typedef struct etudiant t_etudiant;

void afficher_etudiant(t_etudiant* etudiant);
void afficher_etudiants(const t_etudiant* etudiants[], int taille);


int main(void)
{
	u_int valeur = 50; 

	t_etudiant etudiant1;
	struct etudiant etudiant2; 

	t_etudiant* etudiant3; 

	t_etudiant* tab[2];


	//int tab[40]
	t_etudiant classe[40];
	printf("La taille allouee a un etudiant: %d\n", sizeof(t_etudiant));

	strcpy(etudiant1.nom, "Valjean");
	strcpy(etudiant1.prenom, "Jean");
	strcpy(etudiant1.code_perm, "VALJ45443423");
	etudiant1.note_tp1 = 80;
	etudiant1.note_tp2 = 85;
	etudiant1.note_tp3 = 79;
	etudiant1.note_intra1 = 80;
	etudiant1.note_intra2 = 95;
	etudiant1.note_final = 78;

	afficher_etudiant(&etudiant1);
	//etudiant1.note_tp1 = 0;

	printf("Note du TP1 de etudiant1 apres afficher: %.2lf\n", etudiant1.note_tp1);


	etudiant3 = &etudiant1;

	

	etudiant3 = (t_etudiant*)malloc(sizeof(t_etudiant));

	strcpy(etudiant3->nom, "Stark");
	strcpy(etudiant3->prenom, "Aria");
	strcpy(etudiant3->code_perm, "VALJ45443423");
	etudiant3->note_tp1 = 80;
	etudiant3->note_tp2 = 85;
	etudiant3->note_tp3 = 79;
	etudiant3->note_intra1 = 80;
	etudiant3->note_intra2 = 95;
	etudiant3->note_final = 78;

	afficher_etudiant(etudiant3);


	//etudiant3->note_tp1;

	tab[0] = &etudiant1;
	tab[1] = etudiant3;


	printf("###############################\n");

	afficher_etudiants(tab, 2);


	system("pause");
	return EXIT_SUCCESS;
}


void afficher_etudiants(const t_etudiant* etudiants[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("Informations de l'etudiant-e: \n");
		printf("Nom: %s\n", etudiants[i]->nom);
		printf("Prenom: %s\n", etudiants[i]->prenom);
		printf("Code Perm.: %s\n", (*etudiants[i]).code_perm);
		printf("***** NOTES *******\n");
		printf("TP1: %.2lf\n", etudiants[i]->note_tp1);
		printf("TP2: %.2lf\n", etudiants[i]->note_tp2);
		printf("TP3: %.2lf\n", (*etudiants[i]).note_tp3);
		printf("INTRA1: %.2lf\n", (*etudiants[i]).note_intra1);
		printf("INTRA2: %.2lf\n", (*etudiants[i]).note_intra2);
		printf("FINAL: %.2lf\n", (*etudiants[i]).note_final);
	}
	

	//(*etudiant).note_tp1 = 0;
}


void afficher_etudiant(const t_etudiant* etudiant)
{
	printf("Informations de l'etudiant-e: \n");
	printf("Nom: %s\n", etudiant->nom);
	printf("Prenom: %s\n", etudiant->prenom);
	printf("Code Perm.: %s\n", (*etudiant).code_perm);
	printf("***** NOTES *******\n");
	printf("TP1: %.2lf\n", etudiant->note_tp1);
	printf("TP2: %.2lf\n", etudiant->note_tp2);
	printf("TP3: %.2lf\n", (*etudiant).note_tp3);
	printf("INTRA1: %.2lf\n", (*etudiant).note_intra1);
	printf("INTRA2: %.2lf\n", (*etudiant).note_intra2);
	printf("FINAL: %.2lf\n", (*etudiant).note_final);

	//(*etudiant).note_tp1 = 0;
}