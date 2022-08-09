#include <stdio.h>
#include <stdlib.h>

int resultado (int fatorial)
{
    int resultado = 1;

    for (int n = fatorial ; n > 0 ; n --)
    {
        resultado = resultado * n;
    }

    return resultado;

}

int main()
{

    /*Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. OBS:
    Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os
    valores de n! para n = 1, . . . ,s 20.*/

    int fatorial;

    printf("digite um numero:  ");
    scanf("%d", &fatorial);

    printf("%d", resultado(fatorial));




    return 0;
}
