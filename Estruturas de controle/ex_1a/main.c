#include <stdio.h>
#include <stdlib.h>


/*Dados três números inteiros digitados pelo usuário diga qual é o maior e o
menor entre eles.
*/

int main()
{
int n;
int maior = 0;
int menor = 100000;

for (int i = 1; i <=3; i++)
{
    printf("digite um numero n:  ");
    scanf("%d", &n);

    if (n > maior)
    {
        maior = n;

    }

    else if (n < menor)
    {
        menor = n;

    }
}

printf("O maior dos numeros eh %d", maior);
printf("\nO menor dos numeros eh %d", menor);


    return 0;
}
