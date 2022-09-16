#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque.*/

struct Produto{
    char nome[80];
    double preco;
    int qntdd;
};

void RecebeProduto (struct Produto v[], int n);
void OrdenaPreco (struct Produto v[], int n);
void OrdenaQntdd (struct Produto v[], int n);

int main()
{
    int n, i = 0;

    printf("Quantidade de produtos para cadastrar:   ");
    scanf("%d", &n);

    struct Produto v[n];

    RecebeProduto(v, n);
    OrdenaPreco(v, n);
    OrdenaQntdd(v, n);

    return 0;
}

void RecebeProduto (struct Produto v[], int n)
{
    int i = 0;

    while (i < n)
    {
        printf("Nome:   ");
        fflush(stdin);
        gets(v[i].nome);

        printf("Preco:   ");
        scanf("%lf", &v[i].preco);

        printf("Quantidade:   ");
        scanf("%d", &v[i].qntdd);

        i++;
    }
}

void OrdenaPreco (struct Produto v[], int n)
{
    int i, j;
    double aux_preco;
    char aux_nome [80];

    for(j = 0; j < n - 1; j++)
    {
       for(i = 0; i < n - 1; i++)
       {
           if (v[i].preco > v[i+1].preco)
           {
               aux_preco = v[i].preco;
               v[i].preco = v[i+1].preco;
               v[i+1].preco = aux_preco;

               strcpy(aux_nome, v[i].nome);
               strcpy(v[i].nome, v[i+1].nome);
               strcpy(v[i+1].nome, aux_nome);

           }
       }
    }

    printf("Produtos ordenados por preco:  ");
    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("nome: %s  ", v[i].nome);
        printf("preco: %.2lf   ", v[i].preco);
        printf("\n");
    }
}

void OrdenaQntdd (struct Produto v[], int n)
{
    int aux, i, j;

    for(j = 0; j < n - 1; j++)
    {
       for(i = 0; i < n - 1; i++)
       {
           if (v[i].qntdd > v[i+1].qntdd)
           {
               aux = v[i].qntdd;
               v[i].qntdd = v[i+1].qntdd;
               v[i+1].qntdd = aux;
           }
       }
    }

    printf("\nProdutos ordenados por quantidade:  ");
    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("nome: %s  ", v[i].nome);
        printf("qntdd: %d   ", v[i].qntdd);
        printf("\n");
    }
}
