#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void flush(void)
{
	do {} while (getchar() != '\n');;
}

int main(void)
{

	int saisie_entier;
	char saisie; 

	printf("Entrez un entier: ");
	scanf("%d", &saisie_entier);
	flush();
	printf("Entier saisi: %d\n", saisie_entier);

	printf("Entrez un caractere: ");
	scanf("%c", &saisie);
	flush();

	printf("Caractere saisi: %c\n", saisie);

	printf("Entrez un caractere: ");
	scanf("%c", &saisie);
	flush();
	printf("Caractere saisi: %c\n", saisie);

	system("pause");
	return 0;
}