// Bibliotheque

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
// fonction d'affichage de couleurs
void Color(int couleurDuTexte,int couleurDeFond) 
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
	
}

// structures d'ajout de medocs

typedef struct Medicament {
	char classeMedicament[20];
	char nomMedicament[20];

}Medicament;
 Medicament tableauMedicament[100];
 
 
 // struct de liste de medocs en stock
 
 typedef struct ListeStock {
	char *contenuStock;
	char *classeMedoc;
} ListeStock;
  ListeStock ListeMedoc[100];

// Variables globales
short int i , nombreDeMedicament , j , pos ;

// Prototype des fonctions
void Menu ();
void saisirPlusieursMedicaments ();
void afficherPlusieursMedicaments ();
void chargementMenu ();
void MedicamentEnStock ();
void RechercheMedicament ();
void ModifierMedoc () ;
void SupprimerMedoc ();
void AffichageParClasse ();
void chargemenListeMedoc ();



// Programme D'execution
int main(int argc, char *argv[])
{
		char nom [30] ;
		char admin [30] = "mohamed";
		char pass[30];
		char mopass[30] = "123";
		
		
		printf("\n\n\n\n\n\n\t\t\t  LOggin a la Pharmacie\n\n\n\n\n");
		printf("\t\t\t  Nom : ");
		scanf("%s",nom);
		printf("\n\t\t\t  pass : ");
		scanf("%s",pass);
		
	
		
		if (strcmpi(nom,admin)==0 && strcmpi(pass,mopass)==0)
		{
			printf("\n\n\n\n\t\t\t  Vous etes connecte\n\t\t\t  avec succes\n\n\n\t\t\t  Renvoie vers la pharmacie >>>");
			Sleep(2);
			system("cls");
			chargementMenu ();
			Menu ();
			getch();
		
		}
		else
		{
			Color(0,3);
			printf("\n\n\n\n\n\t\t\t Mauvais loggin\n\t\t\t Fin du Programme");
			Color(7,0);
			Sleep(2);
		}
			
	
	return 0;
} 
// Fonction de chargement du contenu de la pharmacie

void chargemenListeMedoc ()
{
	printf("\n\n\n\t  Veuillez attendre quelque seconde...\n\n\n");
	Sleep(1);
	printf("\n\n\n\t  Chargement de la liste de stock\n\n");
	Sleep(1);
	printf("\n\n\n\t  ");
	for (i = 0 ; i<=2 ; i++)
	{
		Color(11,0);
		printf("|||||");
		Sleep(1);
	}
	Color(7,0);
	Sleep(1);
	printf("\n\n\n\t  Chargement terminee avec succes!!\n");
	printf("\n\n\t Merci de votre patience tapez sur \n\t une touche pour acceder a la liste de Medicament");
	getch();
	system("cls");
}
void chargementMenu ()
{
	printf("\n\n\n\t  Veuillez attendre quelque seconde...\n\n\n");
	Sleep(1);
	printf("\n\n\n\t  Chargement du contenu de la pharmacie\n\n");
	Sleep(1);
	printf("\n\n\n\t  ");
	for (i = 0 ; i<=5 ; i++)
	{
		Color(11,0);
		printf("||||||");
		Sleep(1);
	}
	Color(7,0);
	Sleep(1);
	printf("\n\n\n\t  Chargement terminee avec succes!!\n");
	Sleep(1);
	printf("\n\n\t Merci de votre patience tapez sur \n\t une touche pour acceder au menu");
	getch();
	system("cls");
}
// Creation du menu et du controle des elements du menu

void Menu ()
{
	// mise en forme du menu 
	
	char choix ;
	char tab[3] ;
	int i ;
	do
	{
		system("cls");
		printf("\n\n\n");
		Color(7,0);
		printf("\t  \tBIENVENUE !\n\n");
		Color(6,0);
		printf("\t  \t          \t                         PHARMACIE MOOO");
		printf("\n\n\n");
		Color(2,0);
		printf("\t\t A.  Saisir plusieurs medicaments\n\n");
		Color(7,0);
		printf("\t\t B.  Afficher la liste des medicaments\n\n");
		printf("\t\t C.  Rechercher un medicament par nom\n\n");
		printf("\t\t D.  Afficher les medicaments par classe\n\n");
		printf("\t\t E.  Modifier un medicament\n\n");
		printf("\t\t F.  Supprimer un medicament\n\n");
		printf("\t\t Q.  Quitter\n\n\n");
	
		// Controle du menu 
		
		printf("\t  tapez : ");
		scanf(" %c", &choix);
		
			switch (choix)
			{
		
				case 'A' :
					system("cls");
					saisirPlusieursMedicaments ();
				
					break;
					
				case 'B' :
					system("cls");
					chargemenListeMedoc ();
					MedicamentEnStock ();
					afficherPlusieursMedicaments ();
					break;
					
				case 'C' :
					system("cls");
					RechercheMedicament ();
					break;
					
				case 'D' :
					system("cls");
					AffichageParClasse ();
					break;
					
				case 'E' :
					system("cls");
					ModifierMedoc () ;
					break;
				case 'F' :
					system("cls");
					SupprimerMedoc ();
					break;
					
				case 'Q' :
			
					printf("Vous avez decide de quitter le programme");
					break;
					
				default : printf("choix invalide !");
					
			}
			
			getch();
			
	}while(choix != 'Q');
			
}


// Fonction de saisi de Plusieurs medicament
void saisirPlusieursMedicaments ()
{

	
	// lecture du nombre de medicament
	do {
			printf("\n\n\n\t  \tCombien de medocs vous sahaitez saisir ? ");
			scanf("%d",&nombreDeMedicament);
	}while(nombreDeMedicament<1 ||nombreDeMedicament>100);
	
	printf("\n");
	// boucles des saisi de plusieurs medicament
	for (i= 0 ; i<nombreDeMedicament ; i++)
	{
		FILE *fichier = fopen("Medoc.txt","a+");
		
		printf("\t  \tNom du produit %d : ",i+1);
		scanf("%s", tableauMedicament[i].nomMedicament);
		
		printf("\t  \tClasse du produit %d : ",i+1);
		scanf("%s", tableauMedicament[i].classeMedicament);
		if (i>0) {
			
			for (j = 0 ; j<i ; j++) {
				if (strcmp(tableauMedicament[i].classeMedicament , tableauMedicament[j].classeMedicament) == 0 ) {
					
					printf("\t  \tLa classe existe\n\t  \tEntrez une nouvelle classe : ");
					scanf("%s",tableauMedicament[i].classeMedicament);
					
				}
			}
		}
		printf("\n");
		fprintf(fichier,"%s   %s\n" , tableauMedicament[i].nomMedicament , tableauMedicament[i].classeMedicament);
		fclose (fichier);
	}
	printf("\n\n\n\n\t  \tProduit ajoute avec succes\a.");
	

}

// fonction d'affichage de plusieurs Medicaments
void afficherPlusieursMedicaments ()
{
	Color(7,0);
	printf("\n\n\n\tPRODUITS AJOUTES (...)\n\n");
	Color(8,0);
	printf ("Classe du produit              nom du produit\n");
	Color(15,0);
	printf ("_______________                 ______________\n");
	Color(3,0);
	for (i= 0 ; i<nombreDeMedicament ; i++)
	{
		printf ("   %s                              %s     	          \n",tableauMedicament[i].classeMedicament, tableauMedicament[i].nomMedicament);
		printf ("\n");
	}
}
 
// Affichage Medicament par classe 

void AffichageParClasse () {
	int choix ;
	printf("\n\n\n\t  \tAFFICHAGE PAR CLASSE\n\n");
	for (i = 0 ; i< nombreDeMedicament ; i++) {
		Color (11,0);
		printf("\t  \t%s a pour classe : %s\n\n",tableauMedicament[i].nomMedicament,tableauMedicament[i].classeMedicament);
		Color (7,0);
	}
	
}
// Fonction d'affichage de la liste des medicament en stock
void MedicamentEnStock ()
{
	
	printf("\n\n\t MEDICAMENT EN STOCK (...) \n\n\n");
	Color(7,0);
	ListeMedoc[0].contenuStock = "DOLIPRANE";
	ListeMedoc[0].classeMedoc = "0A0";
	ListeMedoc[1].contenuStock = "EFFERALGAN";
	ListeMedoc[1].classeMedoc = "0A1";
	ListeMedoc[2].contenuStock = "DAFALGAN";
	ListeMedoc[2].classeMedoc = "0A2";
	ListeMedoc[3].contenuStock = "LEVOTHYROX";
	ListeMedoc[3].classeMedoc = "0A3";
	ListeMedoc[4].contenuStock = "FORLAX";
	ListeMedoc[4].classeMedoc = "0A4";
	ListeMedoc[5].contenuStock = "ELUDRIL";
	ListeMedoc[5].classeMedoc = "0A5";
	Color(8,0);
	printf ("Classe du produit              nom du produit\n");
	Color(15,0);
	printf ("_______________                 ______________\n");
	Color(11,0);
	for (i= 0 ; i<5; i++)
	{
		printf ("   %s                            %s     	          \n",ListeMedoc[i].classeMedoc,ListeMedoc[i].contenuStock);
		printf ("\n");

	}
}


//Fonction de recherche de Medicament 
void RechercheMedicament () {
	
	pos = 0 ; 
	char recherche[20];
	int compare ;
	printf("\n\n\n\t  \tEntrer le medicament a chercher : ") ;
	scanf("%s",recherche);
	while (pos<nombreDeMedicament && strcmp(recherche ,tableauMedicament[pos].nomMedicament) == 1 ) {
		pos++;
	}
	compare = strcmp(recherche,tableauMedicament[pos].nomMedicament);
	if (compare == 0) {
		printf("\n\t  \tMedicament Trouvez Avec Succes\a\n\n\n");
		printf ("\t  \tClasse du produit              nom du produit\n");
		Color(15,0);
		printf ("\t  \t_______________                 ______________\n");
		Color(3,0);
		printf ("\t  \t    %s                              %s     	          \a\n",tableauMedicament[pos].classeMedicament,tableauMedicament[pos].nomMedicament);
	}
	
	else {
		Color(0,4);
		printf("\n\n\t  \tLe medicament n'existe pas dans les produits ajoute");
		Color(7,0);
	}
}

// Modification de Medicament

void ModifierMedoc ()  {
		int indice  ;
		char elt [20] ;
		FILE *fichier = fopen("Medoc.txt","a+");
		printf("\n PRODUITS A MODIFIER \n\n");
		printf ("Indice du Medoc                 Classe du produit                 Nom du produit\n");
		Color(15,0);
		printf ("_______________                 ______________                   _______________\n");
		Color(9,0);
		for(i=0;i<nombreDeMedicament;i++)
		{
			printf ("   %d  =>                          %s     	                     %s\n",i ,tableauMedicament[i].classeMedicament,tableauMedicament[i].nomMedicament);
		}
		printf ("\n");
		Color(7,0);
		printf("\n Entrez L'indice Du Medicament a Modifier : ");
		scanf("%d",&indice) ;
		
		if (indice < 0 || indice >nombreDeMedicament)  {
			Color(0,3);
			printf(" L'indice du produit a modifier est incorrect\n");
			Color(7,0);
		}
		
		else {
			printf("\n Entrez le nouveau Medicament : ");
			scanf("%s",tableauMedicament[indice].nomMedicament);
			Color(0,2);
			printf("\n Medicament modifier avec succes\n\n Verifier dans la liste des Medicaments\a");
			Color(7,0);
			fprintf(fichier,"%s" , tableauMedicament[indice].nomMedicament );
			fclose (fichier);
		}
}

// Fonction de suppresion de Medicament
void SupprimerMedoc ()
{
		int indice ;
		
		printf("\n PRODUIT A SUPPRIMER \n\n");
		printf ("Indice du Medoc                 Classe du produit                 Nom du produit\n");
		Color(15,0);
		printf ("_______________                 ______________                   _______________\n");
		Color(4,0);
		for(i=0;i<nombreDeMedicament;i++)
		{
			printf ("   %d  =>                          %s     	                     %s\n",i ,tableauMedicament[i].classeMedicament,tableauMedicament[i].nomMedicament);
		}
		Color(7,0);
		
		printf("\n Entrez l'indice du medicament a supprimer : ");
		scanf("%d",&indice) ;
		
		if (indice < 0 || indice >nombreDeMedicament)  {
			Color(0,4);
			printf(" L'indice du produit a Supprimer est incorrect\n");
			Color(7,0);
		}
	
	else
	{
		
		for (i= indice ; i<nombreDeMedicament ; i++)
		{
			tableauMedicament[i-1] = tableauMedicament[i];

		}
		nombreDeMedicament--;
		Color(0,3);
		printf("\n     suppresion reussi verifier dans la liste des produit ajoute\a\n");
		Color(7,0);
		
		
	}
	
	
}







