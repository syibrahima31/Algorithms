#include <stdio.h>
#include <stdlib.h>


int main()
{ 
   struct Personne
   {    
       int age ; 
       float  taille ; 


   };

   struct Personne personne1;  

   struct Personne * pointeur; 

   pointeur = &personne1; 

   printf( "la taille de %d est ", pointeur->age); 
   


    return 0; 
}