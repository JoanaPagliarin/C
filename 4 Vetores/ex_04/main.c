#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i].*/

int Vet_A [10];
int Vet_B [10];
int Vet_C [10];

printf("Digite os 10 primeiros numeros do Vetor A:\n");

for (int i = 1; i < 11; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &Vet_A[i-1]);
}

printf("Vetor A = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d, ", Vet_A[i]);
}

printf("%d", Vet_A[9]);
printf(" }");
printf("\n\n");

printf("Digite os 10 primeiros numeros do Vetor B:\n");

for (int i = 1; i < 11; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &Vet_B[i-1]);
}

printf("Vetor B = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d, ", Vet_B[i]);
}

printf("%d", Vet_B[9]);
printf(" }");
printf("\n\n");


printf("O Vetor A mais o Vetor B gera o Vetor C:\n");
printf("Vetor C = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d, ", Vet_A[i] + Vet_B[i]);
}

printf("%d", Vet_A[9] + Vet_B[9]);
printf(" }");
printf("\n\n");





    return 0;
}
