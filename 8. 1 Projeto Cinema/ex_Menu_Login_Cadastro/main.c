#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#define N 5

struct Cliente
{
    char nome[50];
    char cpf[14];
    int ocupado;
};

void inicio (struct Cliente clientes[], int n);
void exibe_poltronas (struct Cliente clientes[], int n);
void escolhe_poltrona (struct Cliente clientes[], int n);
void cadastro_cliente (struct Cliente clientes[], int i);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct Cliente clientes[N];
    inicio (clientes, N);
    escolhe_poltrona (clientes, N);

    return 0;
}

void inicio (struct Cliente clientes[], int n)
{
    for(int poltrona = 10; poltrona <= 45; poltrona++)
    clientes[poltrona].ocupado = 0;
}

void exibe_poltronas (struct Cliente clientes[], int n)
{
    printf("Poltronas disponíveis: ");
    printf("\n");
    int poltrona = 10;
    for(int j = 0; j < 6; j++)
    {
        for(int i = 0; i < 6; i++)
        {
            if (clientes[poltrona].ocupado == 0)
            {
                printf("%d ", poltrona);
                poltrona++;
            }

            else
            {
                printf("   ");
                poltrona++;
            }
        }
        printf("\n");
    }
}

void escolhe_poltrona (struct Cliente clientes[], int n)
{
    exibe_poltronas(clientes, n);
    char resposta;
    int poltrona;

    do{
        for(int i = 0; i < n; i++)
        {
            printf("Digite 'c' para comprar, 'r' para reservar, 'x' para cancelar reserva ou 's' para sair:  ");
            scanf("%c",&resposta);

            switch (resposta)
            {
            case 'c':
                {
                    cadastro_cliente(clientes, i);
                    printf("Digite uma poltrona para compra:  ");
                    scanf("%d", &poltrona);
                    clientes[poltrona].ocupado = 1;
                    exibe_poltronas(clientes, n);
                    break;
                }

            case 'r':
                {
                    cadastro_cliente(clientes, i);
                    printf("Digite uma poltrona para reserva:  ");
                    scanf("%d", &poltrona);
                    clientes[poltrona].ocupado = 1;
                    exibe_poltronas(clientes, n);
                    break;
                }

            case 'x':
                {
                    printf("Digite uma poltrona para cancelar a reserva:  ");
                    scanf("%d", &poltrona);
                    clientes[poltrona].ocupado = 0;
                    exibe_poltronas(clientes, n);
                    break;
                }

            case 's':
                {
                    printf("Tchau!");
                }
        }
    }


    }while(resposta != 's');
}

void cadastro_cliente (struct Cliente clientes[], int i)
{
    fflush(stdin);
    printf("Digite seu nome:    ");
    gets(clientes[i].nome);

    fflush(stdin);
    printf("\nDigite seu cpf:    ");
    gets(clientes[i].cpf);

    fflush(stdin);
}
