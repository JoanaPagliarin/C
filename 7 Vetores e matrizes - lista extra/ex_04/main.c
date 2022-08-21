#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va- ´
lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posições X e Y .*/

int main()
{
    int v[8];
    int i = 1;
    int x, y;
    int soma = 0;

    while (i < 8)
    {
        printf("digite o %d valor:  ", i);
        scanf("%d", &v[i]);
        i++;
    }

    printf("\nescolha um numero X de 1 a 7:  ");
    scanf("%d", &x);

    printf("\nescolha um numero Y de 1 a 7:  ");
    scanf("%d", &y);

    soma = v[x] + v[y];

    printf("\nsoma: %d", soma);




    return 0;
}
