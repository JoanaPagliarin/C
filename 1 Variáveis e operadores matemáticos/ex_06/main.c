#include <stdio.h>
#include <stdlib.h>

int main()
{
   float preco_kg = 12;
   float kg_comida;

   printf("quantos kg de comida vc consumiu?  ");
   scanf("%f", &kg_comida);

   printf("vc devera pagar o valor de %.2f reais",preco_kg*kg_comida);

    return 0;
}
