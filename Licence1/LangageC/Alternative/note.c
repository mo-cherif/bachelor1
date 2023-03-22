#include <stdio.h>

int main()
{

	int pop , malade = 1 , jour =1 ;
	
	printf("Entrer la population : ");
	scanf("%d",&pop);
	
	while(malade != pop){
		
		malade = malade + 2;
		printf("%d",malade);
	}
		
}
