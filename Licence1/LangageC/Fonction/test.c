#include <stdio.h>

int triple(int nombre){
	return 3*nombre;
}
//convertir euro en francs
double conversion(double euros){
	double francs = 0;
	francs = 6.55957*euros;
	return francs ;
	
}
//convertir francs en euros
double conversionE(double francs){
	double euros = 0 ; 
	euros = francs/6.55957;
	return euros ;
}

int menu()
{
	int choix = 0 ;
	
	while(choix<1 || choix>4)
	{
		printf("1.poulet\n");
		printf("2.viande\n");
		printf("3.pates\n");
		printf("votre choix ? ");
		scanf("%d",&choix);
	}
	
	return choix ;
	
}


int main (){
	
	switch(menu())
	{
		case 1:
			printf("vous avez choisi le poulet . \n\n");
			break;
		case 2:
			printf("vous avez choisi la viande . \n\n");
			break;
		case 3:
			printf("vous avez choisi les pates . \n\n");
			break;
	};
	
	/*int nombre1 , nombre2 , nombre;
	printf("veuiller entrer deux nombre\n");
	printf("premier nombre: ");
	scanf("%d",&nombre1);
	printf("second nombre: ");
	scanf("%d",&nombre2);
	nombre = nombre1;
	nombre1 = nombre2;
	nombre2 = nombre ;
	printf("\n");
	printf("nombre un est maintenant egal: %d\n",nombre1);
	printf("nombre deux est maintenant egal: %d\n",nombre2);
	printf("le programme a bien echanger les deux valeurs");*/
	
	int nombreEntre , nombreTriple;
	printf("Entrer un nombre : ");
	scanf("%d",&nombreEntre);
	printf("le triple de cet nombre est : %d\n\n",triple(nombreEntre));
	printf("Conversion euro en francs\n");
	printf("10 euros = %fF\n\n",conversion(10));
	printf("Conversion francs en Euros\n");
	printf("10 francs = %fEuro\n",conversionE(10));
	
	
	

}
