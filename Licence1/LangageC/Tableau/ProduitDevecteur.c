#include <stdio.h>

int main ()

{
	int tableauUn [3];
	int tableauDeux [3];
	int i , j , produitScalaire = 1 ;
	
	for (i = 0 ; i<3 ; i++)
	{
		printf("Entrez Les valeurs du Tableau1 d'indice [%d] : ",i);
		scanf("%d",&tableauUn[i]);
		
		printf("Entrez Les valeurs du Tableau2 d'indice [%d] : ",i);
		scanf("%d",&tableauDeux[i]);
		
		produitScalaire = tableauUn[i] * tableauDeux[i];
		
	}
	
	printf("Le produit scalaire des vecteurs est : %d",produitScalaire);
	
		
	
	

}
