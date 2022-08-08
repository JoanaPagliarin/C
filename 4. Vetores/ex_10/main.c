#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordena-
    ção que preferir.*/

    int vet [5];
    int aux;

    printf("Digite os 5 primeiros numeros do Vetor:\n");

    for (int i = 1; i < 6; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet[i-1]);
    }

    printf("Vetor 1 = { ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", vet[i]);
    }

    printf("%d", vet[4]);
    printf(" }");
    printf("\n\n");

    for (int j = 0; j <=3; j++)
    {
        for (int i = 0; i <=3; i++)
        {
            if (vet[i] > vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }

        }
    }

    printf("Vetor ordenado = { ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", vet[i]);
    }

    printf("%d", vet[4]);
    printf(" }");
    printf("\n\n");


    return 0;
}
