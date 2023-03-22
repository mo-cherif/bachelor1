#include <stdio.h>

int main()
{
	float prix , poids ;
	char dest ;
	printf("***** Calcul de prix du poids d'un colis *****\n");
	
	//lecture poids
	
	printf("Veuillez entrer le poids :  ");
	scanf("%f",&poids);
	
	// test sur le poids
	
	if (poids <= 5 )
		prix = poids * 10;
	else
		prix = poids * 15 ;
	
	// lecture de la destinaton
	
	printf("Saisissez la destination entre A B et C :  ") ;
	scanf(" %c",&dest);
	
	// test sur la destination
	
	if (dest == 'A')
		prix = prix * 1.1 ;
	else if (dest == 'B')
		prix = prix * 1.2;
	else if (dest == 'C')
		prix = prix * 1.3;
	else 
		printf("Choix errone !\n");
		
	// Affichage du prix 
	
	printf("Le prix final est de : %.2f MAD" , prix);
	
	getch();
}
