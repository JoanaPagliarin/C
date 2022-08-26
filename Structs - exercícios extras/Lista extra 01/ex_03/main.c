#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

//Programa pra sistema bancário

struct Cliente
{
    char nome [50];
    char cpf[14];
    float deposito_inicial;
};

void LeCliente (struct Cliente clientes[], int n);
int LocalizaCPF(struct Cliente clientes[], int n);
float ImprimeSaldo(struct Cliente clientes[], int n);

int main()
{
    struct Cliente clientes[N];
    LeCliente (clientes, N);
    LocalizaCPF (clientes, N);
    printf("O saldo da conta eh %.2f", ImprimeSaldo (clientes, N));

    return 0;
}

void LeCliente (struct Cliente clientes[], int n)
{
    for(int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nome:  ");
        gets(clientes[i].nome);

        fflush(stdin);
        printf("CPF:  ");
        gets(clientes[i].cpf);

        printf("Digite um valor para deposito inicial:  ");
        scanf("%f", &clientes[i].deposito_inicial);
        printf("\n\n");
    }
}

int LocalizaCPF (struct Cliente clientes[], int n)
{
    char resposta[14];;
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
