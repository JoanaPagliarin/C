#include <stdio.h>
#include <stdlib.h>

//2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

int main()
{
    int v[7];
    int i = 0;

    while (i < 6)
    {
        printf("digite o %d valor:  ", i+1);
        scanf("%d", &v[i]);
        i++;
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%d  ", v[i]);
    }

    return 0;
}
