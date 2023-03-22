#include <stdio.h>
/*
int main ()
{
	//declaration des variables
	int tableau [5] , positionMax , positionMin ;
	short int i ;
	int somme , min , max ;
	float moyenne ;
	
	//remplir le tableau
	
	for (i = 0 ; i<5 ; i++)
	{
		printf("T[%d]: " , i);
		scanf("%d",&tableau[i]);
	}
	
	//afficher la somme des elements du tableau
	
	somme = 0 ;
	
	for (i = 0 ; i<5 ; i++)
	{
		somme = somme + tableau[i];
	
	}
	//afficher la moyenne du tableau
	
		moyenne = somme / 5.0 ;
	
	//afficher le minimum des elements du tableau
	
	min = tableau [0];
	
	for (i = 0 ; i<5 ; i++)
	{
		if (min > tableau[i])
		{
			min = tableau[i];
			positionMin = i;
		}
			
	}
	//afficher le maximum des elements du tableau
	max = tableau[0];

	for (i = 0 ; i<5 ; ++i)
	{
		if (max<tableau[i])
		{
			max = tableau[i];
			positionMax = 	i;
		}
			
	}


	printf("La somme du tableau : %d\n" , somme);
	printf("la moyenne du tableau : %f\n",moyenne);
	printf("Le minimum est : %d Et sa position = %d\n", min,positionMin);
	printf("Le maximum est : %d Et sa position = %d\n",max,positionMax);
*/


/*int main ()

{
	float tableauNote[3]  ;
	short int i ;
	int nombreAdmis = 0 , nombreAjourne = 0;
	
	for (i = 0 ; i<3 ; i++)
	{
		printf("note%d : ",i+1);
		scanf("%f",&tableauNote[i]);
		
		if (tableauNote[i] < 10)
		{
			nombreAjourne++ ;
		}
		else if (tableauNote[i] >= 10) 
			nombreAdmis++ ;
	}
	
	printf("Le nombre d'Etudiant Ajourne est : %d\n",nombreAjourne);
	printf("Le nombre d'Etudiant Admis est : %d\n",nombreAdmis);
	
	
}*/

/*
int main ()
{
	//Copier un tableau dans un autre 
	
	
	
	//Declaration de variables
	
	int tableau[3] , tableau1[4]  , fusionTableau[7];
	short int i , j ;
	
	
	//Lecture du tableau 
	
	printf("Entrez les elements du tableau 1 : \n");
	for (i = 0 ; i<3 ; i++)
	{
		printf("Tableau[%d] : ",i+1);
		scanf("%d",&tableau[i]);
		
		
		
	}
	
	 
	
	printf("\nEntrez les elements du tableau 2 : \n");
	for (i= 0 ; i<4 ; i++)
	{
		printf("Tableau[%d] : ",i+1);
		scanf("%d",&tableau1[i]);
		
		
	}
	
	// fusion du tableau
	


	
	printf("La fusion des tableaux est : \n");
	
	for (i = 0 ; i<3 ; i++)
	{
		fusionTableau[i] = tableau[i];
		
		
	}
	
	
	
	for (i = 3 ; i<7 ; i++)
	{
		fusionTableau[i] = tableau1[i-3];
	}
	
	for (i = 0 ; i<7 ; i++)
	{
		printf("Fusion Des Tableaux [%d] : %d \n" , i , fusionTableau[i]);
		
		
	}

		
}*/

int main ()
{
	// trie d'un tableau
	
	int tableau[4] , trie , j , i;
	printf("Lecture du tableau\n");
	for (i = 0 ; i<4 ; i++)
	{
		printf("T[%d] : ",i+1);
		scanf("%d",&tableau[i]);
	}
	
	for (i = 0 ; i<4 ; i++)
	{
		for(j=i+1 ; j<4 ; j++)
		{
			if (tableau[i] > tableau[j])
			{
				trie = tableau[i];
				tableau[i] = tableau[j];
				tableau[j] = trie ;
			}
		}
	}
	
	for (i = 0 ; i<4 ; i++)
	{
		printf("T[%d] : %d\t",i+1 , tableau[i]);
	}
	
}



















































