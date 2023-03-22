#include <stdio.h>
/*
	exercice 1 sur les boucles imbriquees :
		Votre programme doit afficher un damier de taille 40×40. 
		Assurez-vous bien que la case tout en haut à gauche contienne un « O », comme c'est le cas dans le damier ci-dessus.


int main ()

{
	
	int i , j ;
	
	for (j = 0 ; j<20 ; j++)
	{
		for (i=0 ; i<20 ; i++)
		printf("OX");
	
		printf("\n");
	
	
		for (i=0 ; i<20 ; i++)
			printf("XO");
			
		printf("\n");
		
	}
	
	
	
}
*/



/*
int main ()
{
	int nombre , i , max , p;
	max=0;
	p=0;
	
	for (i=0 ; i<5 ; i++)
	{
		printf("Entrez 10 nombre successifs : ");
		scanf("%d" , &nombre);
		if (max < nombre)
		{		
			max=nombre;
			p=i;
		}
	}
	printf("le plus grand est %d et son rang %d" , max , p+1);
}*/

/*
	int main ()
	
	{
		int somme , j , n  ,  resultat;
		somme = 0 ;
		j=0;
		int i ;
		while (somme<100)
		{
			scanf("%d",&n);
			somme = somme + n ;
			j++;
			
			resultat = somme ;
			
		}
		
		printf("la somme est %d\n",resultat);
		printf("le nombre de saisie est %d ",j);
		
}*/
/*
	int main ()
	
	{
		int A , n , x  , P;
		
		printf("Entrer la valeur n du polynome : ");
		scanf("%d",&n);
		printf("Entrer la valeur x de l'argument : ");
		scanf("%d",&x);
	
		for (P=0 ; n>=0 ; n--)
		{
			printf("Veuillez entrer le coefficient : \n");
			scanf("%d",&A);
			P = P * x+ A  ;
		}
		printf("la valeur du polynome pour x = %d : %d" , x , P);
		
		getch();
		
	}*/
	
	/*int main ()
	
	{
		int i , j , n , R , inverse , N  ;
		int somme = 0 ;
		
		do
		{
			printf("Entrez un nombre de 4 caractere : ");
			scanf("%d",&n);
			N = n;
			while (N!=0)
			{
				inverse = inverse * 10 ;
				inverse = inverse + N%10;
				N = N / 10;
			}
		}while(n<0 || n>=9999 );
		
		
		
		
		do 
		{
			
			R = n % 10 ;
			somme = somme + R ;
			n = n / 10 ;
		}while(n>0);
		
		printf("l'inverse est : %d\n",inverse);
		printf("la somme est : %d",somme);
		
	}*?
	
	


/*int main ()
{
	int n , i ;
	i=0;
	int j = 0 ;
	printf("Entrez une valeur : \n");
	scanf("%d",&n);
	
	while (n>=0)
	
	{
		
		if (n % 2 == 0)
		{
			printf("c'est un nombre pair\n\n");
			i++;
		}
		
		else 
		{
			printf("c'est un nombre impair\n\n");
			j++;
		}
			
		printf("Entrez une valeur : \n");
		scanf("%d",&n);
	}
	/*if(n%2==0)
		i--;
	else
		j--;*/
	//printf("Il y'a %d nombre pair\n",i);
	//printf("\tET\n");
	//printf("Il y'a %d nombre impair\n",j);
	
//}

/*
int main ()
{
	int n , i , j , k;
	j = 0;
	for (i = 0 ; i<5 ; i++)
	{
		printf("Entrez l'entier : ");
		scanf("%d",&n);
		
		if (n == 10 )
		{
			j++;
		}
		
		if (n == 20)
		{
			k=1;
		}
	}
	
	printf("le nombre 10 a ete tapez : %d fois\n",j);
	
	if(k==1)
		printf("le nombre 20 a ete tape au moins une fois \n");
	else 
		printf("le nombre 20 n'a pas ete taper !");
}*/
/*
int main ()
{
	int nombreEmploye , total = 0 ;
	float Salaire  , GrandSalaire = 0 , PetitSalaire = 0 , somme , moy ;
	
	printf("Entrez le salaire : ");
	scanf("%f",&Salaire);
	GrandSalaire = Salaire ;
	PetitSalaire = Salaire;
	somme = Salaire;
	
	while (Salaire != 0)
	{
		printf("Entrez le salaire : ");
		scanf("%f",&Salaire);
		/*if(Salaire == 0)
			break;*/		
		/*somme = somme + Salaire;
		
		if(GrandSalaire < Salaire)
		{
			GrandSalaire = Salaire  ;
		}
		
		else if (PetitSalaire > Salaire && Salaire>0)
		{
				PetitSalaire = Salaire;
		}
		total = total + 1;
	}
	
	moy = somme / total;
	
	printf("Le plus grand salaire est : %2.f\n",GrandSalaire);
	printf("Le plus petit salaire est : %2.f\n",PetitSalaire);
	printf("le total des salaires est : %d\n",total);
	printf("la moyenne des salaires est : %2.f\n",moy);
}*/
/*
int main ()

{
	int i ;
	float n1 , n2 , n3 , moyenne = 0;
	
	for (i = 1 ; i<=3 ; i++)
	{
	
		do
		{
			printf("Entrez la premiere note : ");
			scanf("%f",&n1);
		
		} while(n1 < 0 || n1>20);
		
		do
		{
			printf("Entrez la deuxieme note : ");
			scanf("%f",&n2);
		
		} while(n2< 0 || n2>20);
		
		do
		{
			printf("Entrez la troisieme note : ");
			scanf("%f",&n3);
		
		} while(n3 < 0 || n3>20);
		
		moyenne = (n1 + n2 + n3)/3;
		
		printf("La moyenne du %d etudiant est : %.2f\n",i,moyenne);
		
		if(moyenne < 10)
		{
			printf("Redoublez d'effort niveau faible\n\n");
		}
		
		else
			printf("Excellent Boulot vous meritez un BonBon !\n\n");
	}
	
	
	
}*/




/*int main ()
{
	int n , max , R , paire ; 
	
	do
	{
		printf("Entrez un nombre de 5 chiffre : ");
		scanf("%d",&n);
		
	} while (n<10000 || n>=99999);
	
	max = 0 ;
	do 
		{
			
			R = n % 10 ;
			n = n / 10 ;
			
			if (max<R)
			{
				max = R ;
			}
			if (R %2==0 && R > paire)
				paire = R;
				
		}while(n>0);
		printf("le maximum est %d\n",max);
		printf("le plus grand pair est : %d\n",paire);
		
		printf("%d\n",R);
		
}

int main ()

{
	int i , somme = 0 , age ;
	
	printf("Entrez l'age d'amal : ");
	scanf("%d",&age);
	
	for (i=1 ; i<=age ; i++)
	
	{
		somme = somme + ( 500+(i*3));
		
	}
	
	printf("le montant egal %d Dh",somme);
}*/

int main ()
{
	int x ;
	x = (int) 6.656;
	printf("%d",x);
}












