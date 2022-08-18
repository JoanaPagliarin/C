#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que solicite dois números do
tipo inteiro distintos ao usuário e que apresente na
tela o maior deles. Esse programa deve possuir uma
função para verificar qual é o maior número. */

int verificaMaior (int x, int y);

int main()
{
    int x, y;

    printf("digite um numero X:  ");
    scanf("%d", &x);

    printf("\ndigite um numero Y:  ");
    scanf("%d", &y);

    printf("\nO maior numero eh %d", verificaMaior(x,y));

    return 0;
}

int verificaMaior (int x, int y)
{
    if (x > y)
    {
        return x;
    }

    else
    {
        return y;
    }
}
