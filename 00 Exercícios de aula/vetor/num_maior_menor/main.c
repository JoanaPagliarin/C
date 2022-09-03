#include <stdio.h>
#include <stdlib.h>

int main()
{

//armazenar 10 valores em um vetor e dar um printf dizendo qual o maior e o menor valor armazenado

// posições = 0 a 9

    int TAM = 10;
    int vetor [TAM];
    int i;
    int numero_maior = vetor[0];
    int numero_menor = vetor[0];


    for (i = 1; i < TAM; i++)
    {
        printf("digite um valor para ocupar o Vetor %d:  ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] < numero_menor)
            numero_menor = vetor[i];

        else if (vetor[i] > numero_maior)
            numero_maior = vetor[i];

    }

    printf("o maior numero eh %d\n", numero_maior);
    printf("o menor numero eh %d", numero_menor);


    return 0;
}
