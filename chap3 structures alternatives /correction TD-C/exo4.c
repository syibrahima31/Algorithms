#include <stdio.h> 

int main()
{
    float  x, abs; 
    printf("Saisir une valeur :"); 
    scanf("%f", &x); 

    if(x>=0)
    {
        abs = x; 
        printf("La valeur absolue de %f est %f ",x,abs); 
    }
    else
    {
        abs = -x ; 
        printf("La valeur absolue de %f est %f ",x,abs);
    }
}