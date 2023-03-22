#include <stdio.h>

int main ()

{
	float tab[5]  ;
	int i ; 
	float somme = 0 ;
	float produit = 1 ;
	float moyenne ;
	for (i= 0 ; i<5 ; i++)
	{
		printf("Entrez les reels : ");
		scanf("%f",&tab[i]);
		
		somme = somme + tab[i];
		produit = produit * tab[i];
		moyenne = somme / 5 ;
	}	
	
	printf("la somme des nombres du tableau est : %.2f\n",somme);
	printf("le produits des nombres du tableau est : %.2f\n",produit);
	printf("la moyenne des nombres du tableau est : %.2f",moyenne);
}
