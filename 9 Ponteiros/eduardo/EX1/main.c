#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Produto{
char nome[80];
float preco;
int quantidade;
};
void insertionsort(struct Produto vetor[], int n);
void ordenaQuant(struct Produto vet[], int n);
void printatruct(struct Produto vet[], int n);

int main()
{

    int n=0;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a quantidade de produtos para inserir ao estoque: ");
    scanf("%d",&n);
    struct Produto estoque[n];
    for (int i=0; i<n; i++){
        printf("Insira o nome do produto [%d]: ",i+1);
        fflush(stdin);
        gets(estoque[i].nome);
        printf("Insira o pre�o do produto [%d]: ",i+1);
        fflush(stdin);
        scanf("%f",&estoque[i].preco);
        printf("Insira a quantidade do produto [%d]: ",i+1);
        fflush(stdin);
        scanf("%d",&estoque[i].quantidade);
    }
    insertionsort(estoque,n);
   // ordenaQuant(estoque,n);

   // printf("Hello world!\n");
    return 0;
}

    void insertionsort(struct Produto vetor[], int n)
{
    struct Produto aux;
    int i, j;
    for (i = 1; i < n; i++)              // PERCORE O VETOR
    {
        aux = vetor[i];                  // AUXILIARA RECEBE O SEGUNDO ELEMENTO DO VETOR
        j = i - 1;                       // J � O INDICADOR DE POSI��O DO VETOR QUE VAI SER PERCORRIDO
        while (j >= 0 && vetor[j].preco > aux.preco) // LA�O DE REPETI��O REALZIADO ENQUANTO J FOR MAIOR QUE 0 E O ELEMENTO NA POSI��O J FOR MAIOR QUE A VARIAVEL AUXILIAR
        {
            vetor[j + 1] = vetor[j];     // LOGO QUANDO A CONDI��O FOR ATENDIDA O VETOR NA POSI��O J+1 RECEBE O ELEMENTO DA POSI��O J, J � DECREMENTADO.
            j = j - 1;
        }
        vetor[j + 1] = aux;             // E O VETOR NA POSI��O J+1 RECEBE O VALOR DA VARIAVEL AUX QUE � O ELEMENTO DO VETOR N�O POSI��O (I) RM QUET�O
    }
                                       // FINALIZA AQUI A TROCA ENTRE OS ELEMENTOS

    printatruct(vetor,n);
};
void ordenaQuant(struct Produto vet[], int n)
{

};

void printatruct(struct Produto vet[], int n)
{
     for (int i=0; i<n; i++){
        printf("PRODUTO: %s !\n",vet[i].nome);
        printf("PRE�O: %.2f !\n",vet[i].preco);
        printf("QUANTIDADE: %d !\n",vet[i].quantidade);

}
}
