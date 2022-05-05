#include <stdio.h> 
#include <stdlib.h>
#define TAILLE_TAB 100 


int maximum(int tab[TAILLE_TAB])
{ 
    int maxi = tab[0]; 
    for(int i=1; i<TAILLE_TAB; i++)
    { 
        if (tab[i]>maxi)
        {
            maxi = tab[i]; 
        }
    }
    return maxi ; 
}


int main()
{ 

    int tab[TAILLE_TAB]; 

    for (int i = 0 ; i<TAILLE_TAB; i++ )
    { 
        tab[i] = i*i ; 
    }

    int maxi = maximum(tab); 
    printf("%d", maxi); 


    return 0; 
}