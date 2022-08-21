#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro
número da série de fibonacci que é maior ou igual a n.*/

void sequencia(int seq[20]);
int numero_maior(int n);

int main()
{
    int n;
    printf("\nDigite um numero n:  ");
    scanf("%d", &n);

    int maior;

    printf("\nPrimeiro numero maior que n: %d", numero_maior(n));

    return 0;
}

void sequencia(int seq[20])
{
    seq[0] = 0;
    seq[1] = 1;

    for (int i = 2; i < 20; i++)
    {
        seq[i] = seq[i-2] + seq[i-1];
    }

}

int numero_maior(int n)
{
    int seq[20];

    sequencia(seq);

    for (int i = 0; i < 20; i++)
    {
        if (seq[i] > n)
        {
            return seq[i];
        }

    }

}
