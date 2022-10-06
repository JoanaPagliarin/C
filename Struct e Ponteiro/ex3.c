#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int rg;
} pessoa;

void lePessoa(pessoa *p, int n);
void imprimePessoas(pessoa *p, int n);
int buscaPessoa(pessoa *p, int n);

void main()
{
    int n;
    printf("Quantidade de pessoas para cadastro:   ");
    scanf("%d", &n);
    pessoa *p = (pessoa *)malloc(sizeof(pessoa) * n);
    lePessoa(p, n);
    printf("\n");
    imprimePessoas(p, n);
    printf("\n");
    buscaPessoa(p, n);
}

void lePessoa(pessoa *p, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("Nome:");
        fflush(stdin);
        gets((p + i)->nome);

        printf("RG:");
        scanf("%d", &(p + i)->rg);

        printf("\n");
        i++;
    }
}

void imprimePessoas(pessoa *p, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("Nome: %s\n", (p + i)->nome);
        printf("RG: %d\n", (p + i)->rg);
        printf("\n");
        i++;
    }
}

int buscaPessoa(pessoa *p, int n)
{
    // busca binária exige vetor ordenado
    pessoa *aux = (pessoa *)malloc(sizeof(pessoa) * n);
    int i, j;
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (p[i].rg > p[i + 1].rg)
            {
                aux[i] = p[i];
                p[i] = p[i + 1];
                p[i + 1] = aux[i];
            }
        }
    }

    // BUSCA BINÁRIA
    int buscaRG;
    printf("Digite o RG que deseja encontrar:  ");
    scanf("%d", &buscaRG);

    int esquerda = -1, direita = n;
    while (esquerda < direita - 1)
    {
        i = (esquerda + direita) / 2;
        
        if (p[i].rg < buscaRG)
        esquerda = i;
        
        else if (p[i].rg > buscaRG)
        direita = i;

        else
        return 1; 
    }
    
    return 0;
}