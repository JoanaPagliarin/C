#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos con-
tendo uma aposta. A seguir imprima quantos pontos fez o apostador.*/

int gabarito [5];
int aposta [10];
int pontos = 0;
int acertos [5];

printf("Digite o gabarito da LOTO da seguinte forma: 5 8 20... :  ");
for (int i = 0; i < 5; i++)
{
    scanf("%d", &gabarito[i]);
}

printf("Digite a sua aposta da mesma forma:  ");
for (int i = 0; i < 10; i++)
{
    scanf("%d", &aposta[i]);
}

int c = 0; //percorre o vetor acertos

for (int k = 0; k < 5; k++)
{
    for(int m = 0; m < 10; m++)
    {
        if (gabarito[k] == aposta[m])
        {
            pontos++;
            acertos[c++] = gabarito[k];
        }
    }
}

printf("O total de pontos que voce fez foi de %d", pontos);

for (int i = 0; i <= c-1; i++)
{
    printf("\nNumero acertado: %d", acertos[i]);
}
    return 0;
}
