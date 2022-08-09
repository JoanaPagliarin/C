#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   //área trapezio

   float base_maior, base_menor, altura;

   printf("qual eh a medida da base maior do trapezio?  ");
   scanf("%f", &base_maior);

   printf("qual eh a medida da base menor do trapezio?  ");
   scanf("%f", &base_menor);

   printf("qual eh a medida da altura do trapezio?  ");
   scanf("%f", &altura);

   printf("a area do trapezio eh de %.2f unidades de medida", ((base_maior + base_menor)*altura)/2);


    return 0;
}
