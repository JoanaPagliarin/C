#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o que recebe um n�mero ponto flutuante n passado por par�metro e devolve a raiz
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
