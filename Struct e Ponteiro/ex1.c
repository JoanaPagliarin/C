#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
   char nome[50];
   float preco;
   int quantidade; 
}produto;

void leProduto(produto *p, int n);
void imprimeProdutos(produto *p, int n);
void ordenaPrecos(produto *p, int n);
void ordenaQuantidades(produto *p, int n);

void main()
{
    int n;
    printf("Quantidade de produtos para cadastro: ");
    scanf("%d", &n);
    produto *p = (produto *)malloc(sizeof(produto)*n);
    leProduto(p, n); 
    imprimeProdutos(p,n);
    ordenaPrecos(p,n); 
    ordenaQuantidades(p,n); 
}

void leProduto(produto *p, int n)
{
    int i=0; 
    // o "i" anda as posições do meu ponteiro; p+i é o mesmo que fazer p++ a cada rodada do laço
    while(i<n)
    {
        printf("Nome do produto:  ");
        fflush(stdin);
        gets((p+i)->nome);
        // string já é um ponteiro, não precisa passar o endereço
        printf("Preco do produto:  ");
        scanf("%f", &(p+i)->preco);
        printf("Quantidade do produto?  ");
        scanf("%d", &(p+i)->quantidade);
        i++;
        printf("\n");
    }
    printf("\n");
}
void imprimeProdutos(produto *p, int n)
{
    int i=0;
    while(i<n)
    {
        printf("Nome do produto: %s\n", (p+i)->nome);
        //  -> já acessa o conteúdo do ponteiro
        //  (p+i)->nome é o mesmo que *(p+i).nome
        printf("Preco do produto: %.2f\n", (p+i)->preco);
        printf("Quantidade do produto: %d\n", (p+i)->quantidade);
        i++;
        printf("\n");
    }
    printf("\n");
}

void ordenaPrecos(produto *p, int n)
{
    printf("Ordenacao por preco:\n");
    int i, j, aux; 
    for(j=0; j<n-1; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if((p+i)->preco > (p+i+1)->preco)
            {
                aux = (p+i)->preco;
                (p+i)->preco = (p+i+1)->preco;
                (p+i+1)->preco = aux; 
            }
        }
    } 
    imprimeProdutos(p,n); 
}

void ordenaQuantidades(produto *p, int n)
{
    printf("Ordenacao por quantidade:\n");
    int i, j, aux; 
    for(j=0; j<n-1; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if((p+i)->quantidade > (p+i+1)->quantidade)
            {
                aux = (p+i)->quantidade;
                (p+i)->quantidade = (p+i+1)->quantidade;
                (p+i+1)->quantidade = aux; 
            }
        }
    } 
    imprimeProdutos(p,n); 
}
