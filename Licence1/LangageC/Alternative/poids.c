#include <stdio.h> 
#include <ctype.h>

int main()
{
	int age ;
	float poids , taille , IMC ;
	char sexe ;
	
	printf("Veuillez entrer votre poids :  ");
	scanf("%f",&poids);
	printf("Veuillez entrer votre taille :  ");
	scanf("%f",&taille);
	
	IMC = poids /(taille*taille);
	printf("votre indice corporelle est : %f\n",IMC);
	
	printf("Entrez votre age :  ");
	scanf("%d",&age);
	
	if (age <= 18)
	{
		if(IMC <= 15)
			printf("Vous etes maigre ");
		if (IMC > 15 && IMC<=30)
		{
			printf("Vous etes normal");
			else
				printf("Vous etes Obese");
		}
	
	}
	

	else {
		
		printf("Quel est votre sexe :  ");
		scanf(" %c",&sexe);
		if(toupper(sexe) == 'M')
		{
			if (IMC<=18)
				printf("un homme maigre");
			if (IMC > 18 && IMC <= 40)
				printf("un homme normal");
			else
				printf("un homme obese");
		}
			
		else
		{
			if(toupper(sexe) == 'F')
				if(IMC<= 16.5)
					printf("une femme normal");
				if(IMC>16.5 && IMC<=35)
					printf("une femme normal");
				if(IMC>35)
					printf("une femme obese");
		}
			
	}
	
	
}
