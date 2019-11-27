#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

int i,h,p,q;
float a,b,c,d,S,r1,r2;

float addition (float a,float b,float c,float d)
{
    return ((a*d) + (b*c))/(b*d);
}
float soustraction (float a,float b,float c, float d)
{
    return ((a*d) - (b*c))/(b*d);
}

float multiplication (float a,float b,float c, float d)
{
    return (a*c)/(b*d);
}

float division (float a,float b,float c, float d)
{
    return (a*d)/(b*c);
}

int simplification (int p,int q)
{
    if (p>q)
    {
      for(i=2;i<=q;i++)
      {
          if (p%i==0 && q%i==0)
          {
              p= p/i;
              q= q/i;
              printf("La fraction simplifiee est %d/%d",p,q);
          }
          else
          {
              printf("On obtient: %d/%d,",p,q);
          }
      }

    }
    else if (p<q)
    {
        for(i=2;i<=p;i++)
      {
          if (p%i==0 && q%i==0)
          {
              p= p/i;
              q= q/i;
              printf("La fraction simplifiee est %d/%d",p,q);
          }
          else
          {
              printf("On obtient: %d/%d,",p,q);
          }
        }
    }
    else
        {
            return 1;
        }
}

bool comparaison (float a,float b,float c, float d)
{
    float r1,r2;
    r1=a/b;
    r2=c/d;
    if (r1==r2)
    {
        printf("EGALITE\n");
        return true;
    }
    else
        {
            printf("NON EGALITE");
            return false;
        }
}
int main()
{
    printf("***Bienvenue***\n\n");
    printf("Choisissez l'operation a realiser:\n 1:addition\n 2:soustraction\n 3:multiplication\n 4:division\n 5:simplification\n 6:comparaison\n 0:quitter\n");
    scanf ("%d",&h);
    while(h<0 || h>6)
    {
        printf("Tu manges les scorpions?\n");
        printf("Recommence\n");
        printf("Choisissez l'operation a realiser:\n 1:addition\n 2:soustraction\n 3:multiplication\n 4:division\n 5:simplification\n 6:comparaison\n 0:quitter\n");
        scanf ("%d",&h);
    }
    switch (h)
    {

    case 0:
        printf(" A la prochaine");
        break;

    case 1:
        printf("Entrez le numerateur\n");
        scanf("%f",&a);
        printf("Entrer le denominateur\n");
        scanf("%f",&b);
        printf("Entrez une nouvelle fois le numerateur\n");
        scanf("%f",&c);
        printf("Entrer une nouvelle fois le denominateur\n");
        scanf("%f",&d);
        while (b==0 || d==0)
        {
            printf("Tu fais ca comment dans ta vie?\n");
            printf("DENOMINATEUR 0?\n");
            printf("Entrez le numerateur\n");
            scanf("%f",&a);
            printf("Entrer le denominateur\n");
            scanf("%f",&b);
            printf("Entrez une nouvelle fois le numerateur\n");
            scanf("%f",&c);
            printf("Entrer une nouvelle fois le denominateur\n");
            scanf("%f",&d);
        }
        printf("La somme de %f/%f et %f/%f est: %f",a,b,c,d, addition(a,b,c,d));
        break;

    case 2:
        printf("Entrez le numerateur\n");
        scanf("%f",&a);
        printf("Entrer le denominateur\n");
        scanf("%f",&b);
        printf("Entrez une nouvelle fois le numerateur\n");
        scanf("%f",&c);
        printf("Entrer une nouvelle fois le denominateur\n");
        scanf("%f",&d);
         while (b==0 || d==0)
        {
            printf("Tu fais ca comment dans ta vie?\n");
            printf("DENOMINATEUR 0?\n");
            printf("Entrez le numerateur\n");
            scanf("%f",&a);
            printf("Entrer le denominateur\n");
            scanf("%f",&b);
            printf("Entrez une nouvelle fois le numerateur\n");
            scanf("%f",&c);
            printf("Entrer une nouvelle fois le denominateur\n");
            scanf("%f",&d);
        }
        printf("La difference de %f/%f et %f/%f est: %f",a,b,c,d, soustraction(a,b,c,d));
        break;

    case 3:
        printf("Entrez le numerateur\n");
        scanf("%f",&a);
        printf("Entrer le denominateur\n");
        scanf("%f",&b);
        printf("Entrez une nouvelle fois le numerateur\n");
        scanf("%f",&c);
        printf("Entrer une nouvelle fois le denominateur\n");
        scanf("%f",&d);
         while (b==0 || d==0)
        {
            printf("Tu fais ca comment dans ta vie?\n");
            printf("DENOMINATEUR 0?\n");
            printf("Entrez le numerateur\n");
            scanf("%f",&a);
            printf("Entrer le denominateur\n");
            scanf("%f",&b);
            printf("Entrez une nouvelle fois le numerateur\n");
            scanf("%f",&c);
            printf("Entrer une nouvelle fois le denominateur\n");
            scanf("%f",&d);
        }
        printf("La produit de %f/%f et %f/%f est: %f",a,b,c,d, multiplication(a,b,c,d));
        break;

    case 4:
        printf("Entrez le numerateur\n");
        scanf("%f",&a);
        printf("Entrer le denominateur\n");
        scanf("%f",&b);
        printf("Entrez une nouvelle fois le numerateur\n");
        scanf("%f",&c);
        printf("Entrer une nouvelle fois le denominateur\n");
        scanf("%f",&d);
         while (b==0 || d==0)
        {
            printf("Tu fais ca comment dans ta vie?\n");
            printf("DENOMINATEUR 0?\n");
            printf("Entrez le numerateur\n");
            scanf("%f",&a);
            printf("Entrer le denominateur\n");
            scanf("%f",&b);
            printf("Entrez une nouvelle fois le numerateur\n");
            scanf("%f",&c);
            printf("Entrer une nouvelle fois le denominateur\n");
            scanf("%f",&d);
        }
        printf("La division de %f/%f et %f/%f est: %f",a,b,c,d, division(a,b,c,d));
        break;

    case 5:
        printf("Entrez le numerateur\n");
        scanf("%d",&p);
        printf("Entrer le denominateur\n");
        scanf("%d",&q);
         while (q==0)
        {
            printf("Tu fais ca comment dans ta vie?\n");
            printf("DENOMINATEUR 0?\n");
            printf("Entrez le numerateur\n");
            scanf("%d",&p);
            printf("Entrer le denominateur\n");
            scanf("%d",&q);
        }
        simplification(p,q);
        break;

    case 6:
        printf("Entrez le numerateur\n");
        scanf("%f",&a);
        printf("Entrer le denominateur\n");
        scanf("%f",&b);
        printf("Entrez une nouvelle fois le numerateur\n");
        scanf("%f",&c);
        printf("Entrer une nouvelle fois le denominateur\n");
        scanf("%f",&d);
         while (b==0 || d==0)
        {
           printf("Tu fais ca comment dans ta vie?\n");
            printf("DENOMINATEUR 0?\n");
            printf("Entrez le numerateur\n");
            scanf("%f",&a);
            printf("Entrer le denominateur\n");
            scanf("%f",&b);
            printf("Entrez une nouvelle fois le numerateur\n");
            scanf("%f",&c);
            printf("Entrer une nouvelle fois le denominateur\n");
            scanf("%f",&d);
        }
        comparaison(a,b,c,d);
        break;

    }

    return 0;
}
