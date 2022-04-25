/*
    nom : SY 
    prenom : Ibrahima 
    email : syibrahima31@gmail.com 
    tel : 77313-00-67
*/

#include <stdio.h> 
#include <stdlib.h> 
#include  <assert.h> 
int somme(int n)
{
    assert((n>=0) && (n<12));
    {
        int s=0; 
    for (int i = 0; i < n; i++)
    {
        s += i ; 
    }

    return s ;  
    }
}

void intarray_debug(int *tab, int taille)
{
    printf("["); 
    for (int  i = 0; i < taille; i++)
    {
        if(i== taille -1) 
        {
            printf("%d", tab[i]); 

        }
        else 
        {
            printf("%d ,", tab[i]);  
        }
        
    }
    printf("]"); 
    
}

int main()
{
    long int n = 100 ; 

    /* remplir un  tableau de 10 elts */
   
    int tableau[n] ;

    // remplissage du tableau 

    for (long int i =0; i <n; i++)
    { 
        tableau[i]= 2 *i + 4 ; 
    }

    intarray_debug(tableau, n) ; 

    return EXIT_SUCCESS; 

}