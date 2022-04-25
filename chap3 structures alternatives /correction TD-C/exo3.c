#include <stdio.h> 



int main()
{
    int age; 

    printf("Saisir votre age :"); 
    scanf("%d", &age); 

    if (age>=18)
    {
        printf("Tu es majeur"); 
    }
    else
    {
        printf("tu n'es pas encore majeur"); 
    }
    
}