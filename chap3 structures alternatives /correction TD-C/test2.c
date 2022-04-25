#include <stdio.h> 
#include <stdlib.h> 



void  echange(int * a, int *b)
{
       int tmp ; 
       tmp = *a;
       *a = *b; 
       *b = tmp;  

       
}


int main()
{

    typedef struct Personne{
           char * nom ; 
           int age; 
           double taille ; 
    }Personne; 

    Personne Joeur; 

    Joeur.age = 12; 
    Joeur.taille = 2.2 ; 
    Joeur.nom = "Ibrahima"; 


    printf("Mr %s SY vous avez %d ans et vous faites une taille %.2lf",Joeur.nom, Joeur.age, Joeur.taille); 


    
    
    return 0; 
}