#include <stdio.h> 
#include <stdlib.h> 



int main()
{
    int jour, moi, annee, A; 
    printf("Donner votre jour, mois,  et annee et naissance : "); 
    scanf("%d %d %d", &jour, &moi, &annee); 

    if (annee >=2000)
        A = annee - 2000;
    else  
        A = annee - 1900; 

    int B = A / 4; 

    int M = moi; 

    int J = jour; 

    int res = A+B + M + J; 

    switch (res % 7 )
    {
    case 0 :
        printf("tu es née Dimanche"); 
        break;
    case 1 : 
        printf("tu es née Dimanche"); 
        break; 

    
    default:
        printf("pas ce plage");
        break;
    }



     
}