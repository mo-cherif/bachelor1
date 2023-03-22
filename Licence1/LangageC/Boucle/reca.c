#include <stdio.h>

int main ()
{
	char choix ;
	
	do
	{
		system("cls");
		printf("\n\nivoirien\n");
	printf("guineen\n");
	printf("quitter\n");
	
	printf("choix : ");
	scanf(" %c",&choix);
	
	switch (choix)
	{
		char tab[20] , i ;
		case 'A': 
			for (i=0 ; i<3 ; i++)
			{
				printf("chiffre ? ");
				scanf("%s",&tab[i]);
			}
			break;
		case 'B' :
				printf("chiffre : ");
			for (i=0 ; i<3 ; i++)
			{
			
				printf("%s\n",tab[i]);
			}
			break;
		default : printf("choix invalide");
	}
		getch();
	}while(choix!='Q');
}
