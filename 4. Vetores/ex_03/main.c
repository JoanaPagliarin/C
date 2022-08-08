#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elemen-
tos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2.*/


int vet [8];

printf("Digite os 8 primeiros numeros do Vetor 1:\n");

for (int i = 1; i < 9; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &vet[i-1]);
}

printf("Vetor 1 = { ");

for (int i = 0; i < 7; i++)
{
    printf("%d, ", vet[i]);
}

printf("%d", vet[7]);
printf(" }");
printf("\n\n");


printf("O Vetor 1 multiplicado por 2 gera o Vetor 2:\n");
printf("Vetor 2 = { ");

for (int i = 0; i < 7; i++)
{
    printf("%d, ", 2*vet[i]);
}

printf("%d", 2*vet[7]);
printf(" }");
printf("\n\n");





    return 0;
}
