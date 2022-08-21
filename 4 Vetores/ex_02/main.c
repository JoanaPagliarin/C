#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7*/

int vet [6];
int num_pares = 0, num_impares = 0, num_maior_50 = 0, num_menor_7 = 0;
int i;
int inicio;
int proximo;

printf("Digite os 5 primeiros numeros do vetor 1:\n");

for (int i = 1; i < 6; i++)
{
    printf("Numero %d: ", i);
    scanf("%d", &vet[i-1]);
}

printf("Vetor = { ");

for (int i = 0; i < 4; i++)
{
    printf("%d, ", vet[i]);
}

printf("%d", vet[4]);
printf(" }");
printf("\n\n");


for (i = 0; i <= 4; i++)
{
    if(vet[i] > 50)
    {
        num_maior_50++;
    }

    if(vet[i] < 7)
    {
        num_menor_7++;
    }

    if(vet[i]%2 == 0)
    {
        if(vet[i] == 0)
            {
                num_pares++;
            }

        else
            {
                num_pares++;
            }
    }

    else
    {
        num_impares++;
    }
}


printf("Quantidade de numeros pares: %d\n", num_pares);
printf("Quantidade de numeros impares: %d\n", num_impares);
printf("Quantidade de numeros maiores que 50: %d\n", num_maior_50);
printf("Quantidade de numeros menores que 7: %d\n", num_menor_7);





    return 0;
}
