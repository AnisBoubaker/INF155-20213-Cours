
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef unsigned int u_int;
typedef int tab_2d[100][100] ;

#define TAILLE_MAX 100
#define TAILLE_CODE_PERM 13

typedef struct etudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_CODE_PERM];
	double note_tp1;
	double note_tp2;
	double note_tp3;
	double note_intra1;
	double note_intra2;
	double note_final;
} t_etudiant;

//typedef struct etudiant t_etudiant;


//Déclaration de prototypes
//void afficher_etudiant(t_etudiant etudiant);
void afficher_etudiant(t_etudiant* etudiant);


int main(void)
{
	u_int numero;
	tab_2d mon_tableau; //Tableau de 100*100 entiers

	t_etudiant etudiant1;
	struct etudiant etudiant2;
	t_etudiant* etudiant3;

	etudiant3 = (t_etudiant*)malloc(sizeof(t_etudiant));

	t_etudiant classe[40];

	strcpy(etudiant1.nom ,  "Valjean");
	strcpy(etudiant1.prenom, "Jean");
	strcpy(etudiant1.code_perm, "VALJ89786701");
	etudiant1.note_tp1 = 85;
	etudiant1.note_tp2 = 90;
	etudiant1.note_tp3 = 82;
	etudiant1.note_intra1 = 79;
	etudiant1.note_intra2 = 84;
	etudiant1.note_final = 89;
	afficher_etudiant(&etudiant1);

	strcpy(etudiant3->nom, "Baggins");
	strcpy(etudiant3->prenom, "Bilbo");
	strcpy(etudiant3->code_perm, "BAGB87879845");
	etudiant3->note_tp1 = 85;
	etudiant3->note_tp2 = 90;
	etudiant3->note_tp3 = 82;
	etudiant3->note_intra1 = 79;
	etudiant3->note_intra2 = 84;
	etudiant3->note_final = 89;
	afficher_etudiant(etudiant3);


	
	//printf("Note du TP1 dans le main: %.2lf\n", etudiant1.note_tp1);

	system("pause");
	return 0;
}


/*
//Version pas efficace car l'etudiant est copié en entier dans l'espace
//memoire de la fonction
void afficher_etudiant(t_etudiant etudiant)
{
	printf("Informations de l'etudiant-e:\n");
	printf("Nom: %s\n", etudiant.nom);
	printf("Prenom: %s\n", etudiant.prenom);
	printf("Code perm: %s\n", etudiant.code_perm);
	printf("Notes: \n");
	printf("TP1: %.2lf\n", etudiant.note_tp1);
	printf("TP2: %.2lf\n", etudiant.note_tp2);
	printf("TP3: %.2lf\n", etudiant.note_tp3);
	printf("Intra1: %.2lf\n", etudiant.note_intra1);
	printf("Intra2: %.2lf\n", etudiant.note_intra2);
	printf("Final: %.2lf\n", etudiant.note_final);
	etudiant.note_tp1 = 0;
}*/

void afficher_etudiant(const t_etudiant* etudiant)
{
	printf("Informations de l'etudiant-e:\n");
	printf("Nom: %s\n", etudiant->nom);
	printf("Prenom: %s\n", (*etudiant).prenom);
	printf("Code perm: %s\n", (*etudiant).code_perm);
	printf("Notes: \n");
	printf("TP1: %.2lf\n", etudiant->note_tp1);
	printf("TP2: %.2lf\n", etudiant->note_tp2);
	printf("TP3: %.2lf\n", (*etudiant).note_tp3);
	printf("Intra1: %.2lf\n", (*etudiant).note_intra1);
	printf("Intra2: %.2lf\n", (*etudiant).note_intra2);
	printf("Final: %.2lf\n", (*etudiant).note_final);
	//(*etudiant).note_tp1 = 0;
}

