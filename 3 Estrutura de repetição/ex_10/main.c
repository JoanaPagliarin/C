#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
pares*/


    int numero, i, qntdd = 0;

    for (i=1; i <= 5; i++)
    {
        printf("digite o %do numero:  ", i);
        scanf("%d", &numero);

        if (numero%2 == 0)
        {
            qntdd+= 1;
        }
    }

    printf("o total de numeros informados que sao pares eh igual a %d", qntdd);

    return 0;
}
