#include <stdio.h>
#include <math.h>


int main()
{
    double  a, b, c , x1, x2,x0, delta;

    printf("Saisir 3 nombres réels a,b,c avec a non nul :"); 
    scanf("%lf %lf %lf", &a,&b,&c); 

    delta = ((b*b) - 4*a*c); 

    if (delta>0)
    {
        x1 = (-b - sqrt(delta))/(2*a); 
        x2 = (-b +  sqrt(delta))/(2*a); 
        printf("On a deux solutions x1=%f et x2=%f", x1, x2); 
    }
    else if(delta==0)
    {
        x0 = (-b)/(2*a); 
        printf("On n'a une solution double %f", x0); 
    }
    else 
    {
        printf("l'equation n'a pas de solutions"); 
    }
    


}