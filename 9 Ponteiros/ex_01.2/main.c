#include <stdio.h>
#include <stdlib.h>

/*Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque.*/

struct Produto{
    char nome[80];
    double preco;
    int qntdd;
};

void RecebeProdutos (int n);
void OrdenaPreco (int n);
void OrdenaQntdd (int n);

int main()
{
    int n;

    printf("Quantidade de produtos para cadastrar:   ");
    scanf("%d", &n);
    struct Produto v[n];

    RecebeProdutos(n);
    OrdenaPreco(n);
    OrdenaQntdd(n);

    return 0;
}

void RecebeProdutos (int n)
{
    int i = 0;
    char *nome[80];
    double *preco;
    int *qntdd;

    struct Produto;

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

    OrdenaPreco(&v, n);
    OrdenaQntdd(&v, n);

}



void OrdenaPreco (struct Produto *v, int n)
{
    int aux, i, j;

    for(j = 0; j < n - 1; j++)
    {
       for(i = 0; i < n - 1; i++)
       {
           if (v[i].preco > v[i+1].preco)
           {
               aux = v[i].preco;
               v[i].preco = v[i+1].preco;
               v[i+1].preco = aux;
           }
       }
    }

    printf("Produtos ordenados por preco:  ");
    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("nome: %s  ", v[i].nome);
        printf("preco: %.2lf   ", v[i].preco);
        printf("qntdd: %d   ", v[i].qntdd);
        printf("\n");
    }
}

void OrdenaQntdd (struct Produto *v, int n)
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
        printf("preco: %.2lf   ", v[i].preco);
        printf("qntdd: %d   ", v[i].qntdd);
        printf("\n");
    }
}
