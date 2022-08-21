#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
    programa que determine e escreva a menor e a maior idades e suas respectivas posições.*/

    int vet [5];
    int menor_idade = 0;
    int maior_idade = 0;
    int aux;
    int indice_menor;
    int indice_maior;

    printf("Digite os 5 primeiros numeros do Vetor:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet[i-1]);
    }

    printf("Vetor = { ");

    for (int i = 0; i <= 3; i++)
    {
        printf("%d, ", vet[i]);
    }

    printf("%d", vet[4]);
    printf(" }");
    printf("\n\n");

    for (int i  = 0; i < 5; i++)
    {
        if (vet[i] > maior_idade)
        {
            indice_maior = i;
            aux = maior_idade;
            maior_idade = vet[i];
        }

        else
        {
            indice_menor = i;
            aux = menor_idade;
            menor_idade = vet[i];
        }
    }

    printf("A menor idade eh: %d e seu indice eh: %d\n", menor_idade, indice_menor);
    printf("A maior idade eh: %d e seu indice eh: %d\n", maior_idade, indice_maior);



    return 0;
}

