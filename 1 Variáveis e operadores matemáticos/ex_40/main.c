#include <stdio.h>
#include <stdlib.h>

int main()
{

   float cat_op, cat_adj, hipotenusa;

   printf("qual o valor do cateto oposto?  ");
   scanf("%f", &cat_op);

   printf("qual o valor do cateto adjante?  ");
   scanf("%f", &cat_adj);


   printf("o valor da hipotenusa é %.2f", sqrt(pow(cat_op,2) + pow(cat_adj,2)));




    return 0;
}
