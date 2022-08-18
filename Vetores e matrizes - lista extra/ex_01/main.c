#include <stdio.h>
#include <stdlib.h>


/*1. Faça um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicões
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posicão 4, atribuindo a esta posicão o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

int main()
{
    int A[6];
    int soma = 0;

    A[0] = 1; A[1] = 0; A[2] = 5; A[3] = -2; A[4] = -5; A[5] = 7;

    soma = A[0] + A[1] + A[5];
    printf("A[0] + A[1] + A[5] =  %d\n", soma);

    A[4] = 100;

    printf("Vetor A:\n");

    for(int i = 0; i < 6; i++)
        {
            printf("%d\n", A[i]);
        }

    return 0;
}
