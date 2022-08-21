#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário.*/

int numero, fat = 1;

    printf("digite um numero para exibir o seu fatorial:  ");
    scanf("%d", &numero);

    for (; numero > 1; numero--)

    {
        fat = numero * fat;
    }

    printf("%d", fat);

    return 0;
}
