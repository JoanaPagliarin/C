#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

struct Livro
{
    char titulo [20];
    char editora [20];
    char autor [20];
    int codigo;
    int ocupado;
};

void zera_vetor(struct Livro biblioteca[], int tam);
int mostraMenu();
int cadastraLivro(struct Livro bibilioteca[], int tam, struct Livro novoLivro);
struct Livro leLivro();
void imprimeLivro(struct Livro Biblioteca[], int tam);
void imprimeBiblioteca(struct Livro biblioteca[], int tam);
int excluirLivro(struct Livro biblioteca[], int tam, int codigo);

int main()
{
    struct Livro biblioteca[TAM];
    int opcao;

    zera_vetor(biblioteca,TAM);

    do
    {
        opcao = mostraMenu();

        switch(opcao){

        case 1: //cadastro livro
            {
                struct Livro novoLivro = leLivro();

                if(cadastraLivro(biblioteca, TAM, novoLivro)==1)
                    printf("\nCadastro bem sucedido!\n");
                else
                    printf("\nCadastro invalido\n");

                break;
            }

        case 2: //exclusão de livro
            {
                int codigo;
                printf("Qual eh o codigo do livro que voce deseja excluir?  ");
                scanf("%d", &codigo);

                if (excluirLivro(biblioteca, TAM, codigo) == 1)
                printf("\nLivro excluido com sucesso!");

                else
                printf("\nErro ao excluir livro. Ele nao existe no sistema");

                break;
            }

        case 3: //exibir dados de UM livro
            {
                int i = 0;
                printf("Digite o codigo do livro para o qual os dados serao exibidos:  ");
                scanf("%d", &i);
                imprimeLivro(biblioteca, TAM);
                break;
            }

        case 4: //exibe dados de todos os livros
            {
                imprimeBiblioteca(biblioteca, TAM);
                break;
            }

        case 0:
            {
                printf("Tchau!\n");
            }
        }


    }while(opcao != 0);

    return 0;
}

void zera_vetor(struct Livro biblioteca[], int tam) //remove lixo do vetor
{
    for(int i = 0; i < tam; i++)
        biblioteca[i].ocupado = 0;
}

int mostraMenu()
{   int opcao = 0;
    printf("Digite 1 para cadastrar livro:  ");
    printf("\nDigite 2 para excluir livro:  ");
    printf("\nDigite 3 para exibir dados de um livro:  ");
    printf("\nDigite 4 para exibir dados de todos os livros:  ");
    printf("\nDigite 0 para sair:  ");
    do
    {   printf("\nQual sua escolha?  ");
        scanf("%d", &opcao);
    }while (opcao < 0 || opcao > 4);

    return opcao; // retorna opção para verificação na main
}

int cadastraLivro(struct Livro biblioteca[], int tam, struct Livro novoLivro) //Opcao 1
{
    for(int i = 0; i < tam; i++)
    {
        if(biblioteca[i].ocupado == 0)
        {
            biblioteca[i] = novoLivro;
            biblioteca[i].ocupado = 1;
            return 1; //cadastro bem sucedido
        }
    }
    return 0; //cadastro inválido
}

struct Livro leLivro()
{
    struct Livro novoLivro;
    fflush(stdin);

    printf("Digite o titulo do livro:   ");
    gets(novoLivro.titulo);

    printf("Digite o autor do livro:  ");
    gets(novoLivro.autor);

    printf("Digite a editora do livro:  ");
    gets(novoLivro.editora);

    printf("Digite o codigo do livro:   ");
    scanf("%d", &novoLivro.codigo);

    novoLivro.ocupado = 1;

    return novoLivro;
};

int excluirLivro(struct Livro biblioteca[], int tam, int codigo) //Opcao 2
{
    for(int i = 0; i < tam; i++)
    {
        if(biblioteca[i].ocupado == 1 && biblioteca[i].codigo == codigo)
        {
            biblioteca[i].ocupado = 0;
            return 1;
        }
    }
    return 0;
}

void imprimeBiblioteca(struct Livro biblioteca[], int tam) //opcao 4: exibe dados de todos os livros
{
    for(int i = 0; i < tam; i++)
    {
        if(biblioteca[i].ocupado == 1)
        {
            printf("Titulo: %s\n", biblioteca[i].titulo);
            printf("Editora: %s\n", biblioteca[i].editora);
            printf("Autor: %s\n", biblioteca[i].autor);
            printf("Codigo: %d\n", biblioteca[i].codigo);
        }
    }
}

void imprimeLivro(struct Livro biblioteca[], int tam)
{
    int i = 0;

    if(biblioteca[i].ocupado == 1)
        {
            printf("Titulo: %s\n", biblioteca[i].titulo);
            printf("Editora: %s\n", biblioteca[i].editora);
            printf("Autor: %s\n", biblioteca[i].autor);
            printf("Codigo: %d\n", biblioteca[i].codigo);
        }
}


