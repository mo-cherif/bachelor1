#include <stdio.h>
#define N 7
int main ()

{
	
	int tableau[N];
	short int nombre , i , x = 0   ;
	
	for (i = 0 ; i<6 ; i++)
	{
		printf("T[%d] : ",i);
		scanf("%d",&tableau[i]);
		
		
	}
	
	printf("Entrez le nombre : ");
	scanf("%d",&nombre);
	
	for (i = 0 ; i<6 ; i++)
	{
		if (nombre ==tableau[i])
			x++;
		
		
	}
	
	printf("l'occurence est : %d",x);
}
