#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e 100.*/

    int numero, i, qntdd = 0;

    for (i = 1; i<=5; i++)
    {
        printf("digite um %do numero:  ", i);
        scanf("%d", &numero);

        if(numero > 0 &&  numero < 100)
        {
            qntdd+= 1;
        }
    }


    printf("o total de numeros entre 0 e 100 eh %d", qntdd);


    return 0;
}
