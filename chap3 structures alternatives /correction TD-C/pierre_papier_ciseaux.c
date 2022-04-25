#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /*  0 - cailloux 
        1 - papier 
        2 - ciseaux 
    */

   int joueurA , joueurB ; 

   printf("A vous de jouez joueur A : "); 
   scanf("%d", &joueurA); 
   printf("A vous de jouez joueur B : "); 
   scanf("%d",&joueurB); 

    if(((joueurA==0) && (joueurB==2)) || ((joueurA==1) && (joueurB==0)) || ((joueurA==2) && (joueurB==1)))
        printf("Le joueur A gagne la partiie "); 

    else if (((joueurB==0) && (joueurA==2)) || ((joueurB==1) && (joueurA==0)) || ((joueurB==2) && (joueurA==1)))
        printf("Le joueur B gagne la parie "); 

    

    return 0; 
}