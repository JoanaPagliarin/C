#include <stdio.h>
#include <stdlib.h>

void trocaConteudo (int *a, int *b);
void ordenaVetor (int *v);

int main()
{
    int num1, num2;
    num1 = 100;
    num2 = 200;

    trocaConteudo(&num1, &num2);

    printf("Apos a troca, num1 = %d e num2 = %d\n", num1, num2);

    printf("\n\nTENTANDO FAZER A ORDENACAO COM VETOR\n");
    int vetor[5] = {5,4,3,2,1};
    ordenaVetor(&vetor);

    return 0;
}

void trocaConteudo (int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenaVetor (int *v)
{
    int i, j, aux;

    for(j = 0; j < 4; j++)
    {
        for(i = 0; i < 4; i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
    printf("vetor ordenado: ");

    for(int i = 0; i < 5; i++)
    printf("%d  ", v[i]);
}

