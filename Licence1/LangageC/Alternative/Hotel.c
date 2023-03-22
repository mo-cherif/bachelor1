#include <stdio.h>

int main ()
{
	float prixU , prixF , montantR;
	int age , etud , nb ;
	char nat ;
	
	printf("Entrez le prix unitaire  ");
	scanf("%f",&prixU);
	printf("Entrez le nombre de nuites  ");
	scanf("%d",&nb);
	prixF = prixU * nb ;
	
	printf("Vous etes marocains ? (N : oui E : non) : ");
	scanf  (" %c",&nat);
	
	if (nat =='E')
	{
		montantR = prixF * 0.1 ;
	}
	else {
		if (nat == 'N')
			montantR = prixF * 0.2;
		else 
			printf("choix errone !");
	}

	prixF = prixF - montantR;
	
	printf("Vous etes etudiant ? (1 : oui , 0 : non) : ") ;
	scanf("%d",&etud);
	
	if (etud==1) {
		printf("Entrez votre age :  ");
		scanf("%d",&age);
		if(age < 18 )
			montantR = prixF * 0.4;
		else 
			montantR = prixF * 0.6 ;
		prixF = prixF - montantR ;
	}
	
	else  {
		if (etud == 0 )
			printf("Vous n'avez le droit a une reduction'");
		else 
			printf("Choix erone !");
	}
	
	printf("\n Le montant final est : %f dh",prixF);
	getch();
	
}
