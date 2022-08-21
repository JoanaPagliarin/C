#include <stdio.h>
#include <stdlib.h>

int main()
{

   float A, B;

   printf("digite um numero A  ");
   scanf("%f", &A);


   printf("digite um numero B  ");
   scanf("%f", &B);


   if (A > B)
   {
       printf("A eh o maior dos numeros");
   }

   else
   {
       printf("B eh o maior dos numeros");
   }

    return 0;
}
