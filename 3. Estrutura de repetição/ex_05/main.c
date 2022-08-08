#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses
números*/


int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, resultado = 0;

printf("digite um 1o numero:  ");
scanf("%d", &num1);

printf("digite um 2o numero:  ");
scanf("%d", &num2);

printf("digite um 3o numero:  ");
scanf("%d", &num3);

printf("digite um 4o numero:  ");
scanf("%d", &num4);

printf("digite um 5o numero:  ");
scanf("%d", &num5);

printf("digite um 6o numero:  ");
scanf("%d", &num6);

printf("digite um 7o numero:  ");
scanf("%d", &num7);

printf("digite um 8o numero:  ");
scanf("%d", &num8);

printf("digite um 9o numero:  ");
scanf("%d", &num9);

printf("digite um 10o numero:  ");
scanf("%d", &num10);


for (num1 = num1; num1 <= num10; num1++)
{
    resultado = resultado + num1;
}

   printf("a somatoria dos numeros informados eh %d", resultado);

    return 0;
}
