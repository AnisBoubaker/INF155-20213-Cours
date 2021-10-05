

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void doubler_tableau(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = tab[i] * 2;
	}
}

int main(void)
{
	int tablo[10] = { 10, 34, 56, 100, 23, 45, 23, 45, 34, 12 };

	doubler_tableau(tablo, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", tablo[i]);
	}

	system("pause");
	return 0;
}