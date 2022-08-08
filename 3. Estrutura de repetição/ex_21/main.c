#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
    mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
    fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
    área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
    em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
    quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
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
