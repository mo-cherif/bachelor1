#include <stdio.h>
#include <string.h>

int longueurChaine(const char* chaine);
int main ()
{
	char chaine[] = "salut";
	int longueur = 0 ; 
	
	longueur = longueurChaine(chaine);
	
	printf("la chaine %s fait %d de long" , chaine , longueur);
}

int longueurChaine(const char* chaine)
{
	int nombreDec = 0 ;
	char chaineDeca = 0 ;
	
	do 
	{
		chaineDeca= chaine[nombreDec];
		nombreDec += 1 ;
	} while(chaineDeca != '\0');
	
	nombreDec -= 1 ;
	
	return nombreDec ;
}
