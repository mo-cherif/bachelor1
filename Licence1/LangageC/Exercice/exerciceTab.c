#include <stdio.h>

int main ()

{
	
	float Tab[3];
	float Tab2 [3] ; 
	int i , j ;
	
	for (i = 0 ; i<3 ; i++)
	{
		printf("Entrez la valeurs de T[%d]  : ",i);
		scanf("%f",&Tab[i]);
		
		Tab2[i] = Tab[i];
	}
	
	printf("les valeurs du premier Tableau sont : ");
	
	for (i = 0 ; i<3 ; i++)
	{
		printf("%.0f  ",Tab[i]);
	}
	printf("\n");
	
	
	printf("les valeurs du second Tableau sont :  ");
	
	for (j = 0 ; j<3 ; j++)
	{
		
		printf("%.0f  ",Tab2[j]);
	}
}
