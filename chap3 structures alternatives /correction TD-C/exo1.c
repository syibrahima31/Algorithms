#include <stdio.h>

	int main()
	{
        // declaration de deux variables 
        double a,b,max; 

	    printf("Saisir deux valeurs réelles :"); 
        scanf("%lf %lf", &a, &b); 

        if (a>b)
        {
            max = a; 
        }
        else
        {
            max = b; 
        }

        printf("La valeur la plus grande est %.1lf", max); 
        

	} 