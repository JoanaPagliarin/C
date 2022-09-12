#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct Pessoa
{
    char rg[10];
    char cpf[12];
    char nome[80];
};

void cadastropessoa(struct Pessoa cadastro[],int num);
void printatruct(struct Pessoa vet[], int num);
void busca(struct Pessoa cadastro[], int num, char chave[], int *posicoes, int *n);

int main()
{
    setlocale(LC_ALL, "Portuguese");                        // ADICIONANDO ACENTUAÇÃO BR
    int num, *posicoes, *n;                                 //}
    char chave[100];                                        //|---> DECLARANDO AS VARIAVEIS
    struct Pessoa cadastro[100];                            //}

    printf("Insira a quantidade de pessoas: ");
    scanf("%d",&num);                                       //LENDO A QUANTIDADE DE PESSOAS
    posicoes=malloc(num*sizeof(int));                       //ALOCANDO ESPAÇO DE MEMORIA PARA QUANTIDADE DE PESSOAS
    cadastropessoa(cadastro,num);                           //CADASTRA AS PESSOAS
    printatruct(cadastro,num);                              //IMPRIME AS PESSOAS CADASTRADAS

    printf("INSIRA O DADO QUE DESEJA BUSCAR: \n");
    printf("NOME/CPF/RG: \n");
    fflush(stdin);
    gets(chave);                                            //LENDO PALVRA-CHAVE
    busca(cadastro,num,chave,posicoes,n);                   //CHAMANDO A FUNÇÃO DE BUSCA
    //TESTANDO OS PONTEIROS
    printf("Fora da função temos %d repetições",n);
    return 0;
}

void cadastropessoa(struct Pessoa cadastro[],int num)
{
    for (int i=0; i<num; i++)
    {
        printf("Insira o nome da pessoa [%d]: ",i+1);
        fflush(stdin);
        gets(cadastro[i].nome);
        printf("Insira o RG da pessoa [%d]: ",i+1);
        fflush(stdin);
        gets(cadastro[i].rg);
        printf("Insira o CPF da pessoa [%d]: ",i+1);
        fflush(stdin);
        gets(cadastro[i].cpf);
    }
}

void printatruct(struct Pessoa vet[], int num)
{
    for (int i=0; i<num; i++)
    {
        printf("NOME: %s \n",vet[i].nome);
        printf("CPF: %s \n",vet[i].cpf);
        printf("RG: %s \n",vet[i].rg);

    }
}

void busca(struct Pessoa cadastro[], int num, char chave[], int *posicoes, int *n)
{
    char buscador[100];
    int pos=0,qtd=0;
    n=0;
    if (strcmp(chave,"NOME")==0)
    {
        printf("Insira o NOME para ser buscado: \n");
        fflush(stdin);
        gets(buscador);
        for (int i=0; i<num; i++)
        {
            if ((strcmp(buscador,cadastro[i].nome))==0)
            {
                posicoes[pos]=i;
                qtd++;
                pos++;
                //printf("ENTROU NOME");
            }
        }
    }

    if (strcmp((chave),"CPF")==0)
    {
        printf("Insira o CPF para ser buscado: \n");
        gets(buscador);
        for (int i=0; i<num; i++)
        {
            if ((strcmp(buscador,cadastro[i].cpf))==0)
            {
                posicoes[pos]=i;
                qtd++;
                pos++;
            }
        }
    }


    if (strcmp((chave),"RG")==0)
    {
        printf("Insira o RG para ser buscado: \n");
        gets(buscador);
        for (int i=0; i<num; i++)
        {
            if ((strcmp(buscador,cadastro[i].rg))==0)
            {
                posicoes[pos]=i;
                qtd++;
                pos++;
            }
        }
    }
    printf("O NOME/RG/CPF %s apareceu um total de %d vezes! \n",buscador,qtd);
    for (int i=0; i<qtd; i++)
    {
        printf("Na posição %d! \n",posicoes[i]);
    }
    *n=qtd;
}
