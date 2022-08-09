#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o que recebe um n�mero inteiro n passado por par�metro e devolve o primeiro
n�mero da s�rie de fibonacci que � maior ou igual a n.*/

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
