
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100
#define TAILLE_MAX_CPERM 13

typedef unsigned int u_int;



typedef struct etudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_MAX_CPERM];
	double note_tp1;
	double note_tp2;
	double note_tp3;
	double note_intra1;
	double note_intra2;
	double note_final;
} t_etudiant;

//typedef struct etudiant t_etudiant;


void afficher_etudiant(t_etudiant* etudiant);


int main(void)
{
	u_int val;

	//Deux façons de déclarer un étudiant
	t_etudiant etudiant1;
	struct etudiant etudiant2;

	t_etudiant* etudiant3;
	t_etudiant etudiant3bis;

	int tab_enties[40];
	
	t_etudiant* tab_etudiants;

	etudiant3 = (t_etudiant*)malloc(sizeof(t_etudiant));

	tab_etudiants = (t_etudiant*)malloc(sizeof(t_etudiant) * 40);

	tab_etudiants[5].note_tp1 = 100;

	etudiant3->note_tp3 = 90;

	//Tableau de 40 étudiants
	t_etudiant tab_etudiants[40];

	printf("Chaque etudiant occupe: %d\n", sizeof(struct etudiant));

	strcpy(etudiant1.nom , "Valjean");
	strcpy(etudiant1.prenom, "Valjean");
	strcpy(etudiant1.code_perm, "VALJ78675618");
	
	//Pas permis: etudiant1 n'est pas un pointeur vers un t_etudiant!!
	//etudiant1->note_tp1 = 10;
	
	etudiant1.note_tp1 = 89;
	etudiant1.note_tp2 = 89;
	etudiant1.note_tp3 = 89;
	etudiant1.note_intra1 = 89;
	etudiant1.note_intra2 = 89;
	etudiant1.note_final = 89;

	afficher_etudiant(&etudiant1);

	printf("La note du TP1 de etudiant1 apres l'afichage: %.2lf\n", etudiant1.note_tp1);

	system("pause");
	return 0;
}

void afficher_etudiant(const t_etudiant* etudiant)
{
	printf("INFORMATIONS DE L'ETUDIANT-E: \n");
	printf("Nom: %s\n", etudiant->nom);
	printf("Prenom: %s\n", (*etudiant).prenom);
	printf("Code permanent: %s\n", (*etudiant).code_perm);
	printf("---- NOTES -----\n");
	printf("TP1: %.2lf\n", etudiant->note_tp1);
	printf("TP2: %.2lf\n", etudiant->note_tp2);
	printf("TP3: %.2lf\n", (*etudiant).note_tp3);
	printf("Intra1: %.2lf\n", (*etudiant).note_intra1);
	printf("Intra2: %.2lf\n", (*etudiant).note_intra2);
	printf("Final: %.2lf\n", (*etudiant).note_final);
	
	//Plus permis, car le parametre est const
	//(*etudiant).note_tp1 = 0;
}