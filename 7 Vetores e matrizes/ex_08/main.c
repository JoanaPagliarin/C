#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa.*/


int main()
{
    int v[7];

    printf("digite 6 numeros:\n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%d  ", v[i]);
    }

    return 0;
}
