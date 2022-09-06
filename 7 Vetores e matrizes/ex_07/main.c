#include <stdio.h>
#include <stdlib.h>
#define N 10

/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posicao que ele se encontra. */


int main()
{

    int v[N], numero_maior, numero_menor, posicao_maior, posicao_menor, i = 0;

    printf("vetor:  ");

    while (i < N)
    {
        scanf("%d", &v[i]);

        if(v[i] > numero_maior)
        {
            posicao_maior = i;
            numero_maior = v[i];
        }

        else if (v[i] < numero_menor)
        {
            posicao_menor = i;
            numero_menor = v[i];
        }

        i++;
    }

    printf("MAIOR NUMERO: %d, POSICAO: %d  ", numero_maior, posicao_maior);
    printf("\nMENOR NUMERO: %d, POSICAO: %d  ", numero_menor, posicao_menor);

    return 0;

}
