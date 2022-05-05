#include <stdio.h> 
#include <stdlib.h> 
#define NB_ELMTS 100


void affichage_impaire(int tab[NB_ELMTS])
{ 
    for(int i =0; i< NB_ELMTS; i++)
    {
        if( i % 2 !=0)
        {
            printf("%d \n ", tab[i]);
        }
    }

}

int main()
{
    int tab[NB_ELMTS]; 

    for( int i =0; i<NB_ELMTS; i++)
    {
        tab[i] = i; 
    }

    affichage_impaire(tab); 


    return 0; 
}