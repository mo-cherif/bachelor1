#include<stdio.h>

int main()
{
	int choix1;
	char choix2;
	
	do
	{
		system("cls");
		printf("\t\t\t- MENU PRINCIPAL - \n\n");
		printf("\t1 ... Option 1\n");
		printf("\t2 ... Option 2\n");
		printf("\t3 ... Option 3\n");
		printf("\t4 ... Quitter\n");
		printf("Faites votre choix : ");
		scanf("%d",&choix1);
		
		switch(choix1)
		{
			case 1 : printf("Vous avez choisi l'option 1\n");					 
					 break;
			case 2 :    do
						{						 
						 system("cls");
				         printf("\t\t\t- SOUS MENU\n\n");
						 printf("A ... Option 21\n");
						 printf("B ... Option 22\n");
						 printf("Q ... Quitter\n");
						 printf("Faites votre choix : ");					 
						 scanf(" %c",&choix2);
						 switch(choix2)
						 {
						 	case 'A' : printf("Vous avez choisi l'option 21\n") ;
						 				break;
						 	case 'B' : printf("Vous avez choisi l'option 22\n") ;
						 				break;
						 	case 'Q' : printf("Vous avez choisi de retourner au menu principal\n") ;
						 				break;
						 	default  : printf("Choix errone\n");
						 }
						 getch();
						}
						while(choix2!='Q');
					 break;
			case 3 : printf("Vous avez choisi l'option 3\n");
					 break;
			case 4 : printf("Vous avez choisi de quitter\n");
					 break;				 				 	
			default :printf("Choix errone"); 	 
		}
		getch();
	}
	while(choix1!=4);	
}
