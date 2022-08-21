#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos.*/


int D [10]; //vetor completo
int D2 [10]; // novo vetor sem nulos e negativos

printf("Digite 10 numeros para o vetor D da seguinte forma: -5 0 4 1 2... : ");

for (int i = 0; i < 10; i++)
{
    scanf("%d", &D[i]);
}

printf("{ ");


for (int i = 0; i < 10; i++)
{
    printf ("%d ", D[i]);
}
 printf("}");


int j = 0;

 for (int i = 0; i < 10; i++)
 {
     if (D[i] > 0)
     {
         D2[j++] = D[i];
     }
 }


 printf("\nNovo vetor sem os numeros nulos e negativos: ");
 printf("{ ");
 for (int i = 0; i <= j - 1; i++)
{
    printf ("%d ", D2[i]);
}
 printf("}");






    return 0;
}
