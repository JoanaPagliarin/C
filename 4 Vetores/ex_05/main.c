#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15.*/

int vet [10];
int soma_menor_15 = 0;
int igual_15 = 0;
int soma_maior_15 = 0;
int qntdd_maior_15 = 0;

printf("Digite os 10 primeiros numeros do Vetor :\n");

for (int i = 1; i < 11; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &vet[i-1]);
}

printf("Vetor A = { ");

for (int i = 0; i < 9; i++)
{
    printf("%d, ", vet[i]);
}

printf("%d", vet[9]);
printf(" }");
printf("\n\n");

for (int i = 0; i < 10; i++)
{
    if (vet[i] < 15)
    {
        soma_menor_15 += vet[i];
    }
}

printf("Soma dos numeros inferiores a 15: %d\n", soma_menor_15);

for (int i = 0; i < 10; i++)
{
    if (vet[i] == 15)
    {
        igual_15++;
    }
}

printf("Quantidade de numeros iguais a 15: %d\n", igual_15);


for (int i = 0; i < 10; i++)
{
    if(vet[i] > 15)
    {
        soma_maior_15 += vet[i];
        qntdd_maior_15++;
    }
}

printf("Media dos numeros superiores a 15: %d", soma_maior_15/qntdd_maior_15);




    return 0;
}
