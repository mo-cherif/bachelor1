
#include <stdio.h>
#include <windows.h>

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


int main ()
{

	short int i,j ;

	printf("\n\n");
	Color(8,0);
	printf("\t\t\tVeuillez Patientez Chargement en cours...\n\n");
	printf("\t\t\t\t");
	
	for (j = 0 ; j<=3 ; j++)
	{
			Color(15,0);
			
			printf("-------");
	}
	
	printf("\n");
	printf("\t\t\t\t");
	
	for (i = 0 ; i<=3 ; i++)
	{
		Color(11,0);
		printf(":.:.:.:");
		sleep(1);
	}
	printf("\n");
	printf("\t\t\t\t");
	
	for (j = 0 ; j<=3 ; j++)
	{
			
		Color(15,0);
		printf("-------");
	}
	printf("\n\n\t\t\t");
	system("pause");
	printf("\n");
	char nom [20];
	printf("\t\tEntrez votre nom : ");
	fgets(nom , 30 , stdin);
	Color(3,0);
	printf("\n\t\tvous-vous appellez %s",nom);
	getch();
}
