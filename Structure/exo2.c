#include <stdio.h>



struct Panneau 
{
    float  largeur; 
    float  longeur; 
    float epaisseur;
    int type_bois ;  

}; 



struct Panneau   saisi ()
{
   struct Panneau P;
   printf("Donner la largeur du panneau :"); 
   scanf("%f",&P.largeur); 
   printf("Donner la longeur du panneau :"); 
   scanf("%f",&P.longeur); 
   printf("Donner l'epaisseur du panneau :"); 
   scanf("%f",&P.epaisseur); 
   printf("Donner le type de bois  pin (code 0), chêne (code 1) ou hêtre (code 2) :"); 
   scanf("%d",&P.type_bois); 

   return P ; 
} ;

void affichage(struct Panneau P)
{
    char  chaine[10]; 

    if (P.type_bois == 0)
    {
        chaine = 'pin'; 
    }

    print("Le panneau a une largeur = %f une longeur = %f une epaisseur = %f et "); 

}

int main()
{
    struct Panneau p = saisi(); 
     
    return 0; 
}