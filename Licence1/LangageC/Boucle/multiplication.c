#include <stdio.h>

int main ()

{
	
	
	int i , j ;
	
	printf(" X*Y  I");
	
	for (i=0 ; i<=10;i++)
	{
		printf("%4d",i);
	}
	
	printf("\n-----");
	
	for (i=0 ; i<=10 ; i++)
	{
		printf("----");
	}
	printf("\n");
	for (i=0;i<=10;i++)
	{
		printf("%3d   I",i);
		
		for (j=0;j<=10;j++)
		{
			printf("%4d",i*j);
		}
		
		printf("\n");
	}
	
	getch();
}
