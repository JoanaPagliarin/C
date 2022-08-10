#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que recebe um número ponto flutuante n passado por parâmetro e devolve a raiz
quadrada de n.*/

void raiz_quadrada(float n);

int main()
{

float n;

printf("digite um valor para n:  ");
scanf("%f", &n);

raiz_quadrada(n);

    return 0;
}

void raiz_quadrada(float n)
{
    printf ("%.2f", sqrt(n));
}
