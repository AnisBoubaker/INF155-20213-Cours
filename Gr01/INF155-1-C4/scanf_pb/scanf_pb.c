

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void flush(void)
{
	do {} while (getchar() != '\n');
}

int main(void)
{
	char saisie; 
	int saisie_int;

	printf("Entrez un entier: ");
	scanf("%d", &saisie_int); 
	printf("Entier saisi: %d\n", saisie_int);
	flush();

	printf("Entrez un caractere: ");
	scanf("%c", &saisie); //R puis entree
	flush();
	printf("Caractere saisi: %c\n", saisie);

	printf("Entrez un caractere: ");
	scanf("%c", &saisie);
	flush();
	printf("Caractere saisi: %c\n", saisie);

	system("pause");
	return 0;
}