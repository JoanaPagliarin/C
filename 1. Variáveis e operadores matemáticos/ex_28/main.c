#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   float nota_1, nota_2;

   printf("qual é a sua primeira nota?  ");
   scanf("%f", &nota_1);


   printf("qual é a sua segunda nota?  ");
   scanf("%f", &nota_2);

   printf("a sua nota final eh de %.2f pontos", ((nota_1*2) + (nota_2*3))/5);





    return 0;
}
