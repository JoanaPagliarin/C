#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e
a. 100, quantos estão entre 101 e 200 e quantos são maiores de 200.*/

    int numero, i, qntd1 = 0, qntd2 = 0, qntd3 = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("digite o %do numero:  ", i);
        scanf("%d", &numero);

        if(numero > 0 && numero <= 100)
        {
            qntd1 += 1;
        }

       else if ((numero > 100) && (numero <= 200))
        {
            qntd2 += 1;
        }

        else
        {
            qntd3 += 1;
        }
    }

    printf("%d numeros estao entre 0 e 100\n", qntd1);
    printf("%d numeros estao entre 101 e 200\n", qntd2);
    printf("%d numeros sao maiores que 200\n", qntd3);

    return 0;
}
