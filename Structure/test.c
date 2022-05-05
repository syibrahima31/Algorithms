#include <stdio.h>


void miseAzero( short ** ptr )
{
    * (ptr[0]) = 0 ;  

    * (ptr[0] + 1) = 0 ; 


}

int main()
{
    short a[3] = {1, 2, 3}; 
    short b[2] = {4,5}; 
    short * tabs[2]={a,b}; 

    short  * tabs[3] = {a, b };  


    printf("%d", *(tabs[1] + 1 )); 



    return 0; 
}