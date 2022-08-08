#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main()
{
    //Portugu�s
    setlocale(LC_ALL, "Portuguese");

    //DETERMINA��O DAS VARI�VEIS
    int numero_canal; // n�mero do canal que a pessoa vai digitar

    int pessoas_canal_3 = 0, pessoas_canal_5 = 0, pessoas_canal_8 = 0, pessoas_canal_11 = 0, pessoas_canal_13 = 0;
    // quantidade total de pessoas assistindo aquele canal
    // necess�ria para contabilizar a audi�ncia de cada canal


    int pessoas_assistindo; // quantidade de pessoas assistindo algum canal em uma determinada casa
                            // necess�ria para caso a casa assista mais de um canal ao mesmo tempo, resposta = SIM
                            // a vari�vel vai sofrer um decremento

    int total_pessoas = 0; // quantidade total de pessoas assistindo algum canal
                          // necess�ria para contabilizar o total de pessoas que participaram da pesquisa
                          // vai sofrer incremento de pessoas_assistindo sempre que resposta = SIM

    int casas_pesquisa = 0; // quantidade de casas que participaram da pesquisa

    char resposta [10]; // resposta do usu�rio quanto a pergunta: "a casa assiste mais de um canal?"
                        // resposta � SIM ou resposta � NAO


    //CABE�ALHO
    printf("--- BEM-VINDO! --\n");
    printf("Essa � uma pesquisa para contabilizar a audi�ncia dos canais.\n");
    printf("______________________________________________________________\n");

    //COMANDOS
    printf("\nQuantas casas est�o participando da pesquisa?  ");
    scanf("%d", &casas_pesquisa);
    printf("\n______________________________________________________________\n");
    printf("\nOs canais dispon�veis s�o os de n�mero 3, 5, 8, 11 e 13.\n");
    printf("\n______________________________________________________________\n");

    for (int i = 1; i <= casas_pesquisa; i++)

    {
        printf("\nVamos cadastrar as informa��es sobre a %d� casa entrevistada!\n", i);
        printf("\n______________________________________________________________\n");
        printf("\nA %d� casa entrevistada assiste mais de um canal? Responda SIM ou NAO:  ", i);
        scanf("%s", resposta);

        if (strcmp(resposta, "NAO") == 0)
        {
            printf("Qual � o �nico canal que essa casa assiste?  ");
            scanf("%d", &numero_canal);

            printf("Quantas pessoas assistem esse �nico canal?  ");
            scanf("%d", &pessoas_assistindo);
            printf("\n______________________________________________________________\n");

            total_pessoas += pessoas_assistindo;

            if (numero_canal == 3)
                pessoas_canal_3 += pessoas_assistindo;

            else if (numero_canal == 5)
                pessoas_canal_5 += pessoas_assistindo;

            else if (numero_canal == 8)
                pessoas_canal_8 += pessoas_assistindo;

            else if (numero_canal == 11)
                pessoas_canal_11 += pessoas_assistindo;

            else
                pessoas_canal_13 += pessoas_assistindo;
        }

        else if (strcmp(resposta, "SIM") == 0)
        {
            printf("\nQuantas pessoas assistem o canal 3?  ");
            scanf("%d", &pessoas_assistindo);
            pessoas_canal_3 += pessoas_assistindo;
            total_pessoas += pessoas_assistindo;

            printf("\nQuantas pessoas assistem o canal 5?  ");
            scanf("%d", &pessoas_assistindo);
            pessoas_canal_5 += pessoas_assistindo;
            total_pessoas += pessoas_assistindo;

            printf("\nQuantas pessoas assistem o canal 8?  ");
            scanf("%d", &pessoas_assistindo);
            pessoas_canal_8 += pessoas_assistindo;
            total_pessoas += pessoas_assistindo;

            printf("\nQuantas pessoas assistem o canal 11?  ");
            scanf("%d", &pessoas_assistindo);
            pessoas_canal_11 += pessoas_assistindo;
            total_pessoas += pessoas_assistindo;

            printf("\nQuantas pessoas assistem o canal 13?  ");
            scanf("%d", &pessoas_assistindo);
            pessoas_canal_13 += pessoas_assistindo;
            total_pessoas += pessoas_assistindo;
        }

        else
        {
            printf("Digite SIM ou NAO\n");
            i--;
        }

    }

    printf("---Audi�ncia dos canais:\n");
    printf("Canal 3: %.2f%%\n", pessoas_canal_3*100.0/total_pessoas);
    printf("Canal 5: %.2f%%\n", pessoas_canal_5*100.0/total_pessoas);
    printf("Canal 8: %.2f%%\n", pessoas_canal_8*100.0/total_pessoas);
    printf("Canal 11: %.2f%%\n", pessoas_canal_11*100.0/total_pessoas);
    printf("Canal 13: %.2f%%\n", pessoas_canal_13*100.0/total_pessoas);




    return 0;
}
