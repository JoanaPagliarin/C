#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
maiores do que 8*/


    int numero, i, qntdd = 0;

    for(i = 1; i<=5; i++)
    {
        printf("digite o %do numero:  ", i);
        scanf("%d", &numero);

        if(numero > 8)
        {
            qntdd += 1;
        }

    }

    printf("%d numeros sao maiores que 8", qntdd);



    return 0;
}
