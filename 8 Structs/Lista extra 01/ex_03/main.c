#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa pra sistema bancário

typedef struct
{
    char nome [50];
    char cpf[14];
    char endereco[20];
    float deposito_inicial;
    float saldo;
} cliente;

void MenuGerente(cliente *p, int n);
void MenuCliente(cliente *p, int n);
void CadastraCliente (cliente *p, int n);
void ExcluiCliente (cliente *p, int n);
void LeCliente (cliente *p, int n);
void AtualizaCliente (cliente *p, int n);
void Operacao (cliente *p, int n);

int main()
{
    cliente a;
    cliente *p = &a;
    int n = 0;

    int resposta;
    while (resposta != 3)
    {
        printf("1 - Acessar o sistema como cliente\n");
        printf("2 - Acessar o sistema como gerente\n");
        printf("3 - Sair");
        scanf("%d", &resposta);

        if(resposta == 1)
        MenuCliente(p, n);

        else
        MenuGerente(p, n);
    }

    return 0;
}

void MenuGerente (cliente *p, int n)
{
    printf("Ola, gerente!\n");
    printf("1 - Cadastrar cliente\n");
    printf("2 - Excluir cliente\n");
    printf("3 - Consultar dados do cliente\n");
    printf("4 - Atualizar dados do cliente\n");
    int resposta;
    scanf("%d", &resposta);

    switch (resposta)
    {
        case 1:
        {
            CadastraCliente(p, n);
            break;
        }
        case 2:
        {
            ExcluiCliente(p, n);
            break;
        }
        case 3:
        {
            LeCliente(p, n);
            break;
        }
        case 4:
        {
            AtualizaCliente(p, n);
            break;
        }
    }
}

void MenuCliente (cliente *p, int n)
{
    printf("Ola, cliente!\n");
    printf("1 - Fazer cadastro\n");
    printf("2 - Excluir cadastro\n");
    printf("3 - Consultar dados\n");
    printf("4 - Atualizar dados\n");
    printf("5 - Sacar ou depositar\n");
    int resposta;
    switch (resposta)
    {
        case 1:
        {
            CadastraCliente(p, n);
            break;
        }
        case 2:
        {
            ExcluiCliente(p, n);
            break;
        }
        case 3:
        {
            LeCliente(p, n);
            break;
        }
        case 4:
        {
            AtualizaCliente(p, n);
            break;
        }
        case 5:
        {
            Operacao(p, n);
            break;
        }
    }
}

void CadastraCliente (cliente *p, int n)
{
    int i = 0;

    printf("Nome:  ");
    fflush(stdin);
    gets((p+i) -> nome);
    printf("CPF:  ");
    fflush(stdin);
    gets((p+i) -> cpf);
    printf("Endereco:  ");
    fflush(stdin);
    gets((p+i) -> endereco);
    Operacao(p);
    printf("\n\n");
}

void ExcluiCliente (cliente *p, int n)
{
    char buscacpf[14];
    printf("Digite o CPF do cliente a ser excluido:  ");
    fflush(stdin);
    gets(buscacpf);


}

int LocalizaCPF (struct Cliente clientes[], int n)
{
    char resposta[14];
    int achou = 0;


    while (achou == 0)
    {
        fflush(stdin);
        printf("Para realizar uma nova transacao, digite seu CPF ou digite SAIR:   ");
        gets(resposta);

        if(strcmp(resposta, "SAIR") == 0)
        {
            printf("\nOperacao finalizada!\n");
            break;
        }

        else
        {
            for(int i = 0; i < n && achou == 0; i++)
            {
                if(strcmp(resposta, clientes[i].cpf) == 0)
                {
                    printf("O CPF foi encontrado!\n");
                    achou = 1;
                    return i;
                }
            }

            printf("CPF invalido!\n");
        }
    }
}

float ImprimeSaldo(struct Cliente clientes[], int n)
{
    char resposta;
    fflush(stdin);
    printf("Digite D para depositar, S para sacar ou X para sair:  ");
    scanf("%c", &resposta);

    int i;
    float valor = 0;
    float saldo = 0;

    switch (resposta)
    {
        case 'D':
        {
            printf("Digite um valor para depositar:  ");
            scanf("%f", &valor);
            saldo = clientes[i].deposito_inicial + valor;
            return saldo;
        }

        case 'S':
        {
            printf("Digite um valor para sacar:  ");
            scanf("%f", &valor);
            saldo = clientes[i].deposito_inicial - valor;
            return saldo;
        }

        case 'X':
        {
            printf("\nOperacao finalizada!\n");
            return saldo;
        }
    }
}
