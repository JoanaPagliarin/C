#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
    mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
    fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
    �rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
    em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
    quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
    fumantes).*/



    int mesas_fumantes = 25, mesas_nao_fumantes = 25;
    int mesas_disponiveis = mesas_fumantes + mesas_nao_fumantes;
    char resposta [50];

    do
    {
        printf("Ola, voce ligou para o restaurante Self-Service\n");
        printf("Ha %d mesas disponiveis para fumantes\n", mesas_fumantes);
        printf("Ha %d mesas disponiveis para nao fumantes\n", mesas_nao_fumantes);
        printf("Voce deseja reservar uma mesa para fumantes?  ");
        scanf("%s", resposta);

        if (strcmp(resposta, "sim") == 0)
        {
            if (mesas_fumantes == 0)
            {
                printf("desculpe, nao ha mesas disponveis para fumantes\n");
            }

            else
            {
                printf("\nok, uma reserva feita para mesa de fumantes\n");
                mesas_fumantes--;
                mesas_disponiveis--;
            }

        }

        else if (strcmp(resposta, "nao") == 0)
        {

            if (mesas_nao_fumantes == 0)
            {
                printf("desculpe, nao ha mesas disponveis para nao_fumantes\n");
            }

            printf("\nok, voce selecionou uma mesa para nao fumantes\n");
            mesas_nao_fumantes--;
            mesas_disponiveis--;
        }

        else
        {
            printf("Digite sim ou nao\n");

        }


        printf("\n");

    }
    while (mesas_disponiveis != 0);

    printf("Ola, voce ligou para o restaurante Self-Service\n");
    printf("desculpe, nao ha mais nenhuma mesa disponivel");

    return 0;
}
