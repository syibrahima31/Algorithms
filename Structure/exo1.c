#include <stdio.h>



struct  NombreRationnel
{
    int numerateur; 
    int denominateur; 
};

struct NombreRationnel saisi()
{
    struct NombreRationnel q ; 
    
    do
    {
        printf("Donner le numerateur et le denominateur: "); 
        scanf("%d %d", &q.numerateur, &q.denominateur); 

    } while (q.denominateur == 0);
    
    
    return q ; 

}

void affichage (struct NombreRationnel q )
{
    printf("la faction est : %d / %d", q.numerateur, q.denominateur); 
}

struct NombreRationnel  mult  (struct NombreRationnel p , struct NombreRationnel q )
{
    struct NombreRationnel  res ; 

    res.numerateur   = p.numerateur * q.numerateur; 
    res.denominateur = p.denominateur * q.denominateur; 


    return res ; 
}

struct NombreRationnel  addition(struct NombreRationnel p, struct NombreRationnel q )
{
    struct NombreRationnel res; 

    res.numerateur = (p.numerateur * q.denominateur) + (q.numerateur * p.denominateur); 
    res.denominateur = p.denominateur * q.denominateur; 

    return res ;  

};


int main()
{
   
   struct NombreRationnel  p ; 
   struct NombreRationnel  q ; 

   p = saisi(); 
   q = saisi(); 


   struct NombreRationnel  prod  = mult(p , q); 
   struct NombreRationnel add = addition(p, q); 

   affichage(add); 

    


    return 0; 
}