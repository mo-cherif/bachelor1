#include <stdio.h>

int main ()

{
	int i , n ;
	
	printf("   X*Y I    0");
	
	for (i =1 ; i<=10 ; i++)
	{
		printf("%5d",i);
	}
	printf("\n");
	printf("   ");
	for (i =0 ; i<=11 ; i++)
	{
		printf("_____");
	}
	printf("\n");
	
	for (n = 0 ; n<=10 ; n++)
	{
		printf("%5d  I",n);
		
		for (i =0 ; i<=n ; i++)
		{
			printf("%5d",i*n);
		}
		printf("\n");
	}

}
