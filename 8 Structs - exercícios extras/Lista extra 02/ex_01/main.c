#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 5

//GERENCIAMENTO DE COMPROMISSOS

struct Horario
{
    int hora;
    int minuto;
    int segundo;
};

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Compromisso
{
    struct Horario;
    struct Data;
    char descricao [50];
};

void LeCompromisso(struct Compromisso compromissos[], int n);
void OrganizaCompromissos(struct Compromisso compromissos[], int n);
void ImprimeComprimisso(struct Compromisso compromissos[], int n);

int main()
{
    struct Compromisso compromissos[N];
    LeCompromisso(compromissos, N);
    ImprimeComprimisso(compromissos,N);
    return 0;
}

void LeCompromisso(struct Compromisso compromissos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("O que eh o seu %do compromisso?   ", i + 1);
        gets(compromissos[i].descricao);

        printf("\nDiga a hora, minuto e segundo do seu compromisso no seguinte formato: 15 30 45:   ");
        scanf("%2d", &compromissos[i].hora);
        scanf("%2d", &compromissos[i].minuto);
        scanf("%2d", &compromissos[i].segundo);

        printf("\nDiga o dia, o mes e o ano do seu compromisso no seguinte formato: 15 04 2002:   ");
        scanf("%2d", &compromissos[i].dia);
        scanf("%2d", &compromissos[i].mes);
        scanf("%4d", &compromissos[i].ano);

        printf("\n\n");
    }
}

void OrganizaCompromissos(struct Compromisso compromissos[], int n)
{
    int aux;

    for (int j = 0; j < n - 1; j++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(compromissos[i].ano > compromissos[i+1].ano)
            {
                aux = compromissos[i+1].ano;
                compromissos[i+1].ano = compromissos[i].ano;
                compromissos[i].ano = aux;
            }

            if(compromissos[i].mes > compromissos[i+1].mes)
            {
                    aux = compromissos[i+1].mes;
                    compromissos[i+1].mes = compromissos[i].mes;
                    compromissos[i].mes = aux;

                    if(compromissos[i].dia > compromissos[i+1].dia)
                    {
                        aux = compromissos[i+1].dia;
                        compromissos[i+1].dia = compromissos[i].dia;
                        compromissos[i].dia = aux;

                        if(compromissos[i].hora > compromissos[i+1].hora)
                        {
                            aux = compromissos[i+1].hora;
                            compromissos[i+1].hora = compromissos[i].hora;
                            compromissos[i].hora = aux;

                            if(compromissos[i].minuto > compromissos[i+1].minuto)
                            {
                                aux = compromissos[i+1].minuto;
                                compromissos[i+1].minuto = compromissos[i].minuto;
                                compromissos[i].minuto = aux;


                                if(compromissos[i].segundo > compromissos[i+1].segundo)
                                {
                                    aux = compromissos[i+1].segundo;
                                    compromissos[i+1].segundo = compromissos[i].segundo;
                                    compromissos[i].segundo = aux;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

    void ImprimeComprimisso(struct Compromisso compromissos[], int n)
    {
        OrganizaCompromissos(compromissos,n);
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                printf("Descrição do Compromisso %d: %s", i+1, compromissos[i].descricao);
                printf("\nData do compromisso: %d/%d/%d",compromissos[i].dia,compromissos[i].mes,compromissos[i].ano);
                printf("\nHorario: %d:%d:%d", compromissos[i].hora, compromissos[i].minuto, compromissos[i].segundo);
                printf("\n\n");
            }
        }
    }
