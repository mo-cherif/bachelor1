#include <stdio.h>
#include <windows.h>

int main ()
{
	int h , m , s;
	
	printf("Entrez les heures : ");
	scanf("%d",&h);
	
	while (h<0 || h>24)
	{
		printf("heure incorrect veuillez retapez svp : ");
		scanf("%d",&h);
	}
	
	printf("Entrez les minutes : ");
	scanf("%d",&m);
	
	while (m<0 || m>59)
	{
		printf("minutes incorrect veuillez retapez svp : ");
		scanf("%d",&m);
	}
	
	printf("Entrez les secondes : ");
	scanf("%d",&s);
	
	while (s<0 || s>59)
	{
		printf("seconde incorrect veuillez retapez svp : ");
		scanf("%d",&s);
	}
	do
	{
		system("cls");
	
		s = s + 1;
		
		if (s==60)
		{
			s = 0 ;
			m = m+1;
			if (m==60)
			{
				m = 0 ;
				h = h + 1;
				
				if (h==24)
				{
					h = 0 ;
				}
			}
		}
		
	
		
		
		if (h<10)	
			printf("0%d:",h);
		else 
			printf("%d:",h);
		
		if (m<10)	
			printf("0%d:",m);
		else 
			printf("%d:",m);
			
		if (s<10)	
			printf("0%d",s);
		else 
			printf("%d",s);
		sleep(1);

} while(!kbhit());
	
	
	
	
	
	
}
