#include <stdio.h>
#include <stdlib.h>
#define N 10

/*receber vetor de 10 numeros; mostrar a qntdd de numeros negativos e a soma dos positivos*/

int main()
{
    int v[N], i = 0, cont = 0, soma = 0;

    printf("Vetor:  ");

    while (i < N)
    {
        scanf("%d", &v[i]);

        if(v[i] < 0)
        cont++;

        else
        soma = soma + v[i];

        i++;
    }

    printf("QNTDD DE NUM NEGATIVOS: %d  ", cont);
    printf("\nSOMA DOS NUM POSITIVOS: %d   ", soma);

    return 0;
}
