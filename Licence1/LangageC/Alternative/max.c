#include <stdio.h>

int main()
{
	int x , y , z , max;
	printf("entrez x :  ");
	scanf("%d",&x);
	printf("entrez y : ");
	scanf("%d",&y);
	printf("entrez z : ");
	scanf("%d",&z);
	
	if (x>y && x>z)
	{
		max = x ;
		
	}
	else if (y>x && y>z)
	{
		max = y ;
	}
	else
	{
		max = z;
	
	}
	printf("le max entre %d , %d et %d est : %d",x,y,z,max);
	
	return 0 ;
}
