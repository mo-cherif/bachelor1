#include <stdio.h>

int main ()
{
	int i , n  ;
	float som  ; 
	som = 0 ;
	do {
		printf("Entrez N : ");
		scanf("%d",&n);
	} while(n<0);
	
	for (i=1 ; i<=n ; i++)
	{
		som = som + (1/i);
	}
	printf ("la somme est %f" , som);
	
}
