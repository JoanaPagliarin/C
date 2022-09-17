#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//cadastrar produtos e ordena-los por preço e por quantidade

typedef struct
{
    char nome[50];
    float preco;
    int qntdd;
} produto;

void LeProduto (produto *p, int n);
void ImprimeProduto (produto *p, int n);
void OrdenaporPreco (produto *p, int n);
void OrdenaporQuantidade (produto *p, int n);

int main()
{

    produto item;
    produto *p = &item;

    int n;
    printf("Quantos produtos voce vai cadastrar?  ");
    scanf("%d", &n);

    LeProduto (p, n);
    ImprimeProduto (p, n);
    OrdenaporPreco (p, n);

    return 0;
}

void LeProduto (produto *p, int n)
{
    int i = 0;
    while (n > 0)
    {
        printf("Nome:  ");
        fflush(stdin);
        gets((p+i) -> nome);
        printf("Preco:  ");
        scanf("%f", &(p+i) -> preco);
        printf("Qntdd:  ");
        scanf("%d", &(p+i) -> qntdd);
        //system("cls");
        i++;
        n--;
    }
}

void ImprimeProduto (produto *p, int n)
{
    int i = 0;
    while (n > 0)
    {
        printf("Nome: %s", (p+i) -> nome);
        printf("\nPreco: %.2f", (p+i) -> preco);
        printf("\nQntdd: %d", (p+i) -> qntdd);
        printf("\n\n");
        n--;
        i++;
    }
}

void OrdenaporPreco (produto *p, int n)
{
    //system("cls");
    int aux_imprime = n,
        N = n,
        aux_guarda_preco,
        i = 0;

    while (N > 0)
    {
        while (n > 0)
        {
            if ((p+i - 1) -> preco > (p+i) -> preco)
            {
                aux_guarda_preco = (p+i - 1) -> preco;
                (p+i - 1) -> preco = p -> preco;
                p -> preco = aux_guarda_preco;
            }

            printf("maior:  %.2f\n", (p+i - 1) -> preco);
            printf("menor:   %.2f\n", p -> preco);
            n--;
            i++;
        }
        N--;
    }

    /*
    i = 0;
    while (aux_imprime > 0)
    {
        printf("%.2f  ", (p+i) -> preco);
        aux_imprime--;
        i++;
    }*/
}
