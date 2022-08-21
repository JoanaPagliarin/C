#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int num_100, num_50, num_10, num_5, num_1;
 int valor_real;

 printf("digite um valor inteiro em reais:  ");
 scanf("%d", &valor_real);

 num_100 = valor_real/100;
 num_50 = (valor_real - (num_100*100))/50;
 num_10 = (valor_real - ((num_100*100)+(num_50*50)))/10;
 num_5 = (valor_real - ((num_100*100)+(num_50*50) + (num_10*10)))/5;
 num_1 = (valor_real - ((num_100*100)+(num_50*50) + (num_10*10) + (num_5*5)));

 printf("o valor digitado eh %d reais", valor_real);
 printf("\nnotas de 100 reais: %d", num_100);
 printf("\nnotas de 50 reais: %d", num_50);
 printf("\nnotas de 10 reais: %d", num_10);
 printf("\nnotas de 5 reais: %d", num_5);
 printf("\nnotas de 1 real: %d", num_1);


    return 0;
}
