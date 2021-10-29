
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int* tab_dyn;
	int* tab_dyn2;

	tab_dyn = (int*)malloc(sizeof(int) * 100);
	tab_dyn2 = (int*)malloc(sizeof(int) * 20);
	/*
	
	....
	*/

	tab_dyn = (int*)realloc(tab_dyn, 120 * sizeof(int));
	if (tab_dyn == NULL)
	{
		printf("Plus de memoire!\n");
		exit(EXIT_FAILURE);
	}

	system("pause");
	return 0;
}