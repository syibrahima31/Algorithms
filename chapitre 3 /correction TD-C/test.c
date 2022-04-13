#include <stdio.h> 


int main()
{
    int choixA ;
    int choixB ; 

    printf("JourA tu jouez en tapant un nombre compris entre 1-3 : ");
    scanf("%d", &choixA);  
    
    printf("JourA tu jouez en tapant un nombre compris entre 0-2 : ");
    scanf("%d", &choixB);  

    if (choixA==2 &&  choixB == 1)
    {
        printf("Le jour A gagne le B"); 
    }
    else if (choixA==0  && choixB== 2)
    {
        printf("Le jour A gagne le B");
    }
    else if  (choixB==2 &&  choixA == 1)
    {
        printf("Le jour B gagne le A"); 
    }
    else if (choixB==0  && choixA== 2)
    {
        printf("Le jour B gagne le A");
    }
    else if (choixB==1 && choixA==0)
    {
        printf("Le jour B ggne la partie");
    }
    

    
    

    /* si l'utilisateur prend 0-cailloux , 1-papier, 2-ciseaux */ 


    return 0; 
}