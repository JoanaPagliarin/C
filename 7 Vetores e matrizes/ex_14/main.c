#include <stdio.h>
#include <stdlib.h>
#define N 5

struct Numero
{
    int numero;
    int posicao_original;
    int posicao_repete[10];
    int num_repeticoes;
};

void Zera_Num_Repeticoes (struct Numero numeros[], int n);
void Recebe_Numeros (struct Numero numeros[], int n);


int main()
{
    struct Numero numeros[N];
    Recebe_Numeros (numeros, N);

    return 0;
}

void Zera_Num_Repeticoes (struct Numero numeros[], int n)
{
    for(int i = 0; i < n; i++)
    numeros[i].num_repeticoes = 1;
}

void Recebe_Numeros (struct Numero numeros[], int n)
{
    Zera_Num_Repeticoes(numeros, n);

    int i,j;

    printf("Digite %d numeros:  ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i].numero);

            for (j = 0; j < i; j++)
            {
                if(numeros[i].numero == numeros[j].numero)
                {
                    numeros[i].num_repeticoes += 1;
                    numeros[i].posicao_repete[j] = j;
                }
            }
    }
}
