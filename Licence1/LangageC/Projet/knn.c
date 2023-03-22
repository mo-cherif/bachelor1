#include <stdio.h>
#include <math.h>
// DECLARATION D'UN POINT 
typedef struct point
{
    /* data */
    int x ;
    int y ;
    int type ; // 0 ou 1 ;
} point ;
point tableauPoint[3] ;
// POUR CHAQUE POINT ON STOCK SA DISTANCE AVEC UN POINT DONNE
typedef struct distance {
    int x ;
    int y ;
    int type ;
    float dist ;
} distance ;

distance tableauDistance[3] ;
distance tmp ;

// PROTOTYPE DES FONCTIONS 
void initialisation ();
void affichagePoints ();
void affichageDistance ();
void calculDistance (int x , int y );
void affichageTrieDistance ();
void trieDistance ();
void Prediction () ;
// FONCTION PRINCIPALE
int main (void)  {
     initialisation ();
     affichagePoints ();
     calculDistance (0, 0) ;
     affichageDistance ();
     trieDistance ();
     affichageTrieDistance () ;
     Prediction () ;
}

// Fonctions pour iniatialiser et remplir les points 
void initialisation () {
    int i ;
    for (i = 0 ; i< 3 ; i++)  {
        printf("Donne Du Point %d\n" , i+1);
        printf("x : ") ; scanf("%d",&tableauPoint[i].x);
        printf("y : ") ; scanf("%d",&tableauPoint[i].y);
        printf("type : ") ; scanf("%d",&tableauPoint[i].type);
        printf("\n");
    }
}

// Fonction pour afficher les points 
void affichagePoints () {
    int i ;
    printf("\nAffichage des points\n");
    for (i = 0 ; i< 3 ; i++)  {
       printf("Point (%d) : x = %d\ty = %d\t type : %d\n",i+1,tableauPoint[i].x , tableauPoint[i].y , tableauPoint[i].type);
    }
}
// Fonction de calcul de la distance
void calculDistance (int x , int y ) {
    int i  ;
    float distances ;
    for (i = 0 ; i<3 ; i++) {
        distances = sqrt((x-tableauPoint[i].x)*(x-tableauPoint[i].x) + (y-tableauPoint[i].y)*(y-tableauPoint[i].y));
        tableauDistance[i].x = tableauPoint[i].x ;
        tableauDistance[i].y = tableauPoint[i].y ;
        tableauDistance[i].type = tableauPoint[i].type ;
        tableauDistance[i].dist = distances ;
    }
}
// Fonction d'affichage de la distance
void affichageDistance () {
    int i ;
    printf("\n\nAffichage de la distance\n");
    for (i = 0 ; i< 3 ; i++)  {
       printf("Point (%d) :\t Distance = %.2f\n",i+1 , tableauDistance[i].dist);
    }
}
 // trie croissant du tableau des distance 

void trieDistance () {
    int i , j ;
    for (i = 0 ; i<3 ; i++) {
       for (j = i+1 ; j<3 ;  j++) {
           if (tableauDistance[i].dist > tableauDistance[j].dist)  {
               tmp = tableauDistance[i] ;
               tableauDistance[i] = tableauDistance[j] ;
               tableauDistance[j] = tmp ;

           }
       }
    }
}

// Fonction d'affichage de la distance apres trie
void affichageTrieDistance () {
    int i ;
    printf("\n\nAffichage de la distance apres trie\n");
    for (i = 0 ; i< 3 ; i++)  {
       printf("Point (%d) :\ttype: %d\t Distance = %.2f\n",i+1 , tableauDistance[i].type,tableauDistance[i].dist);
    }
}

// Predire le type d'un point 

void Prediction ()  {
    int k = 3 ;
    int zero = 0 ;
    int un  = 0;
    int i , aPredire ;
    for (i = 0 ; i< k ; i++) {
        if (tableauDistance[i].type == 0 ) {
            zero++;
        } else {
            un++;
        }
    }

    printf("\n\tPrediction \n") ;
    

    printf("predire le type : ") ; scanf("%d",&aPredire) ;
    if (aPredire == 0 ) {
            if (zero > un ) {
                printf("Le prochain type sera un zero\n");
            }

            else {
                printf("Le prochain type sera un 1\n");
            }
        } 

    else {
        if ( un > zero) {
                printf("Le prochain type sera un 1\n");
            }

            else {
               printf("Le prochain type sera un zero\n");
            }
    }
}