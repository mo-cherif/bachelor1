#include <stdio.h>

int main () {
	
	int t[100] , i , taille;

	printf("Veuillez saisir la taille du tableau : ");
	scanf("%d",&taille);
	
	
	for (i= 0 ; i<taille ; i++)
	{
		printf("t[%d] : ",i);
		scanf("%d",&t[i]);
	}
	printf("Element\n");
	for (i= 0 ; i<taille ; i++)
	{
		printf("%d  ",t[i]);
		
	}
	printf("\nInverse du tableau\n");
	
	for (i=taille ; i>0 ; i--)
	{
	
		printf("%d  ",t[i]);
	
	}
	
	
}
