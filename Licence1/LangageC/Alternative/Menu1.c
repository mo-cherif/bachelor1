#include <stdio.h>

int main ()
{
	int choix , coef1 , coef2 ;
	float nombre1 , nombre2 , moyenne , note ;
	
	printf("\n");
	printf("\t\t-- Menu --\n\n\n");
	printf("\t1... Moyenne Module\n\n");
	printf("\t2... Mention Module\n\n");
	printf("\t3...  Quitter\n\n");
	
	printf("Faites votre choix : ");
	scanf("%d",&choix);
	
	switch (choix)
	{
		case 1 : 
				printf("Entrer les deux nombres suivants\n");
				printf("1er nombre : ");
				scanf("%f",&nombre1);
				printf("2eme nombre : ");
				scanf("%f",&nombre2);
				printf("Entrer le coefficient du premier nombre :  ");
				scanf("%d",&coef1);
				printf("Entrer le coefficient du second nombre :  ");
				scanf("%d",&coef2);
				moyenne = ((nombre1*coef1) + (nombre2*coef2))/(coef1+coef2);
				printf("Votre moyenne est : %.2f\n" , moyenne);
				break;
		case 2 :
			printf("Entrer la note :  ");
			scanf("%f",&note);
			if (note < 5)
				printf("Mediocre\n");
			else if (note < 10)
				printf("Insufisant\n");
			else if (note < 14)
				printf("A.Bien\n");
			else if (note < 18)
				printf("Bien\n");
			else if (note <= 20)
				printf("T.Bien\n");
			else 
				printf("Choix errone ! \n");
			break;
		case 3 :
			break;
			
		default :
			printf("Mauvais Choix");
			
	}
}
