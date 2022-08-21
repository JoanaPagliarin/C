#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

int vet_1 [11];
int vet_2 [11];

printf("Digite os 10 primeiros numeros do vetor 1:\n");

for (int i = 1; i < 11; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &vet_1[i-1]);
}

printf("Vetor 1 = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d, ", vet_1[i]);
}

printf("%d", vet_1[9]);
printf(" }");
printf("\n\n");

printf("Digite os 10 primeiros numeros do vetor 2:\n");

for (int i = 1; i < 11; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &vet_2[i-1]);
}

printf("Vetor 2 = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d, ", vet_2[i]);
}

printf("%d", vet_2[9]);
printf(" }");
printf("\n\n");

//--------------------------------------------------------------------//
printf("A soma dos elementos de mesmo indice gera o terceiro vetor:\n");
printf("Vetor 3 = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d,  ", vet_1[i] + vet_2[i]);
}
printf("%d ", vet_1[9] + vet_2[9]);
printf("}");


    return 0;
}
