#include <stdio.h>
#include <stdlib.h>

int main()
{

int numero_1, numero_2, numero_3;

    printf("digite um primeiro numero inteiro ");
    scanf("%d", &numero_1);

    printf("digite um segundo numero inteiro e diferente do primeiro numero  ");
    scanf("%d", &numero_2);

    printf("digite um terceiro numero inteiro e diferente do primeiro e do segundo  ");
    scanf("%d", &numero_3);


    if ((numero_1 == numero_2) || (numero_1 == numero_3) || (numero_2 == numero_3))
    {
        printf("os 3 numeros devem ser diferentes");
    }

    else if ((numero_1>numero_2)  && (numero_1>numero_3) && (numero_2>numero_3))
    {
        printf("a ordem decrescente dos numeros digitados eh %d > %d > %d", numero_1, numero_2, numero_3);
    }

    else if ((numero_1>numero_2)  && (numero_1>numero_3) && (numero_3>numero_2))
    {
        printf("a ordem decrescente dos numeros digitados eh %d > %d > %d", numero_1, numero_3, numero_2);
    }

    else if ((numero_2>numero_1)  && (numero_2>numero_3) && (numero_1>numero_3))
    {
        printf("a ordem decrescente dos numeros digitados eh %d > %d > %d", numero_2, numero_1, numero_3);
    }

    else if ((numero_2>numero_1)  && (numero_2>numero_3) && (numero_3>numero_1))
    {
        printf("a ordem decrescente dos numeros digitados eh %d > %d > %d", numero_2, numero_3, numero_1);
    }

    else if ((numero_3>numero_1)  && (numero_3>numero_2) && (numero_1>numero_2))
    {
        printf("a ordem decrescente dos numeros digitados eh %d > %d > %d", numero_3, numero_1, numero_2);
    }

    else
        printf("a ordem decrescente dos numeros digitados eh %d > %d > %d", numero_3, numero_2, numero_1);



    return 0;
}
