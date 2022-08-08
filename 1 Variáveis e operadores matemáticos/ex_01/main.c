#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("A imobiliaria Toledo apenas vende terrenos retangulares; verifique as areas disponiveis \n\n");

   float comprimento;
   float largura;

   printf("digite o comprimento do terreno:  ");
   scanf("%f", &comprimento);


   printf("\n\n");

   printf("digite a largura do terreno:  ");
   scanf("%f",&largura);


   printf("\n\n");

   printf("a area do terreno eh: %.2f", comprimento*largura);


    return 0;
}
