#include <stdio.h>
#include <stdlib.h>

/*)Dados números n e m,  escreva a todos os números entre 1 a 200 que sejam
divisíveis por n mas não por m.*/

int main()
{
    int n, m, v[201], j = 0, contador = 0;

    printf("Digite um numero n:  ");
    scanf("%d", &n);

    printf("\nDigite um numero m:  ");
    scanf("%d", &m);

    for (int i = 1; i <= 200; i++)
    {
        if((n%i == 0) && (m%i != 0))
        {
            v[j] = i;
            j++;
            contador++;
        }
    }

    for (j = 0; j < contador; j++)
    {
        printf("%d  ", v[j]);
    }

    return 0;
}
