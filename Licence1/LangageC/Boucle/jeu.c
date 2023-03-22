#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int Ccache  , Cdevine,nombreessai = 6 , compteur=0  ;
	int max = 10 , min = 1 ;
	
	srand(time(NULL));
	
	Ccache = (rand() %(max - min + 1)) + min;
	do
	{
		printf("\n\t\tLe jeu vous donne jusqu'a 6 essais\n\n");
		printf("Vous envisager trouvez le Chiffre cache en combien d'essai ?  ");
		scanf("%d",&nombreessai);
	}while(nombreessai <= 0 || nombreessai>6);
	
	do 
	
	{
		printf("Tapez le nombre : ");
		scanf("%d",&Cdevine);
		
		if (Cdevine < Ccache)
			printf("le nombre cache est plus !\n\n");
		else if (Cdevine > Ccache)
			printf("le nombre cahe est moins !\n\n");
		else
			printf("Bravo vous avez reussi !\n\n");
			
		printf("Nombre de coups : %d\n\n",compteur);
		compteur++;
	} while (Ccache != Cdevine && compteur<nombreessai);
	
	
	
}


