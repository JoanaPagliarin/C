#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ordenar produto por preço e por quantidade

typedef struct
{
    char nome[80];
    int  preco;
    int qntdd;
} produto;

int Menu();
void RecebeProdutos (produto v[]);
void MostraProdutos (produto v[]);
void OrdenaPreco (produto v[]);
void OrdenaQntdd (produto v[]);

int main()
{
    produto v[4];

    while (Menu() == 1)
    RecebeProdutos(v);

    /*while (Menu() == 2)
    MostraProdutos(v);*/




    return 0;
}

int Menu()
{
    int resposta;
    printf("1 - Cadastrar produto\n");
    printf("2 - Ver produtos cadastrados\n");
    printf("3 - Sair\n");
    scanf("%d", &resposta);

    if (resposta == 3)
    return 0;

    else
    return resposta;
}

void RecebeProdutos(produto v[])
{
    printf("Nome:  ");
    fflush(stdin);
    gets(v -> nome);

    printf("Preco:  ");
    scanf("%d", v -> preco);

    printf("Quantidade:   ");
    scanf("%d", v -> qntdd);

    printf("%s", *v -> nome);
    printf("%d", *v -> preco);
    printf("%d", *v -> qntdd);




    //&v[n];

}


/*
void MostraProdutos (produto v[], produto *ptrProduto)
{
    if (= NULL)
    printf("Nenhum produto cadastrado");
}*/
