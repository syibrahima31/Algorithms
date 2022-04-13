#include <stdio.h> 


int main()
{
    float note; 
    printf("Saisir une note :"); 
    scanf("%f",&note); 

    if (note<8)
    {
        printf("Vous etes ajourné"); 
    }
    else if ( (8<=note) && (note<10))
    {
        printf("Vous etes admis a orale"); 

    }
    else if (note>10)
    {
        printf("Vous etes admis"); 
    }


    typedef struct Point 
    {
        int x ; 
        int y ; 
        
    };
    
    
}