#include <stdio.h> 
#include <math.h>


float moyenne (float a ,  float b , float c);
float somme (float a ,  float b , float c);

int main ( )  {
	float x , y ;
	
	printf("la moyenne : %.2f" , moyenne(100,12,10) );



}

float moyenne (float a ,  float b , float c)  {
	float moy ;
	moy = somme(a,b,c) / 3;
	 return moy ; 
}

float somme (float a ,  float b , float c)  {
	float som ;
	som = a+b+c ;
	return som ;
}
