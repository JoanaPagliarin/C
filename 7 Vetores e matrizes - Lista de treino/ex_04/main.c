#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois va- �
lores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa �
devera escrever a soma dos valores encontrados nas respectivas posi��es X e Y .*/

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
