#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int menu()
{
	int choix ;
	
	while (choix<1 || choix>3)
	{
		printf("1. guineen ");
		printf("2. senegalais ");
		printf("3. maliens ");
		printf("Entrez votre choix : ");
		scanf("%d",&choix);
	}
}


int main ()
{
	switch (menu())
	{
		case 1 :
			printf("vous etes guineen");
			break;
		case 2 :
			printf("vous etes senegalais");
			break;
		case 3 :
			printf("vous etes marocains");
			break;
	}
}
