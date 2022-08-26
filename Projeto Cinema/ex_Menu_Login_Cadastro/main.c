#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

struct Cliente
{
    char nome[50];
    char cpf[14];
    int poltrona_escolhida;
};

void ZeraPoltronas(struct Cliente clientes[], int n);
void LeCliente (struct Cliente clientes[], int n);
void Menu (struct Cliente clientes[], int n);
int LocalizaCPF (struct Cliente clientes[], int n);
void Operacao (struct Cliente clientes[], int n);

int main()
{
    struct Cliente clientes [N];
    LeCliente (clientes, N);
    LocalizaCPF (clientes, N);
    Operacao (clientes, N);

    return 0;
}

void ZeraPoltronas(struct Cliente clientes[], int n)
{
    for(int i = 0; i < n; i++)
    clientes[i].poltrona_escolhida = 0;
}

void LeCliente (struct Cliente clientes[], int n)
{
    printf("CADASTRO - CLIENTES - CINEMA\n");

    for(int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nome:  ");
        gets(clientes[i].nome);

        fflush(stdin);
        printf("CPF:  ");
        gets(clientes[i].cpf);
        printf("\n");
    }

    ZeraPoltronas (clientes, n);
}


void Menu (struct Cliente clientes[], int n)
{
    int poltrona = 10;

    for (int linha = 0; linha < 6; linha++)
    {
        for(int coluna = 0; coluna < 6; coluna++)
        {
            for (int i = 0; i < n; i++)
            {
                if (poltrona == clientes[i].poltrona_escolhida)
                {printf("  "); break;}

                else
                {printf("%d  ", poltrona); break;}

            } poltrona++;

        } printf("\n");
    }
}

int LocalizaCPF (struct Cliente clientes[], int n)
{
    char resposta[14];


    printf("Para comprar, reservar ou cancelar uma poltrona, digite seu CPF.\n");
    printf("Digite SAIR para finalizar a operacao.\n");
    fflush(stdin);
    gets(resposta);

    if(strcmp(resposta, "SAIR") == 0)
    {printf("\nVoce saiu!\n");}

    else
    {
        for(int i = 0; i < n; i++)
        {
            if(strcmp(resposta, clientes[i].cpf) == 0)
            {printf("O CPF foi encontrado!\n");
            return i;}
        }
        printf("CPF invalido!\n");
    }
}


void Operacao (struct Cliente clientes[], int n)
{
    Menu(clientes, n);

    char resposta;
    int j =  LocalizaCPF(clientes, n);

    fflush(stdin);
    printf("\nDigite C para comprar uma poltrona, R para reservar, X para cancelar a reserva ou S para sair:   ");
    scanf("%c", &resposta);

    switch (resposta)
    {
    case'C':
    {
        fflush(stdin);
        printf("\nDigite a poltrona desejada para compra:   ");
        scanf("%d", &clientes[j].poltrona_escolhida);
        printf("\nCompra efetuada!\n");
        Menu(clientes, n);
        LocalizaCPF(clientes, n);
        break;
    }

    case'R':
    {
        fflush(stdin);
        printf("\nDigite a poltrona desejada para reserva:   ");
        scanf("%d", &clientes[j].poltrona_escolhida);
        printf("\nReserva efetuada!\n");
        Menu(clientes, n);
        LocalizaCPF(clientes, n);
        break;
    }

    case'X':
    {
        clientes[j].poltrona_escolhida = 0;
        printf("\nCancelamento efetuado!\n");
        break;
    }
    case'S':
    {
        printf("\nOperacao finalizada!\n");
        break;
    }
    }
}
