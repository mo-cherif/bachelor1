#include <stdio.h>

int main ()

{
	int nombre , R , produit , impaire ;
	produit = 1 ;
	do 
		{
			printf("Donnez un nombre de 4 caractere :  ");
			scanf("%d",&nombre);
	
		}	while (nombre<1000 || nombre>=9999);
	
	do 
		{
			
			R = nombre % 10 ;
			produit = produit * R ;
			nombre = nombre / 10 ;
			
			if (R %2 != 0 && R > impaire)
			{
				impaire = R ;
			}
			
		}while(nombre>0);
		
		
		
	printf("le produit est : %d\n",produit);
	printf("le plus grand nombre impaire est : %d",impaire);
}
