#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*receber dois arquivos e escrever o conteudo em um terceiro arquivo*/

int main()
{
    int TAM = 200, i = 0, TAM3 = 0;
    char str[TAM], nome_arq1[20], nome_arq2[20], nome_arq3[20];

    printf("Digite o nome do arq1:  ");
    fflush(stdin);
    scanf("%[^\n]s", nome_arq1);
    printf("Digite o nome do arq2:  ");
    fflush(stdin);
    scanf("%[^\n]s", nome_arq2);
    printf("Digite o nome do arq3:  ");
    fflush(stdin);
    scanf("%[^\n]s", nome_arq3);
    printf("\n\nString arq1:  ");
    fflush(stdin);
    fgets(str, TAM, stdin);
    TAM = strlen(str) - 1;

    FILE *arq1 = fopen(nome_arq1, "w");
    FILE *arq3 = fopen(nome_arq3, "w");
    printf("\n\nConteudo arq1 de nome %s\n", nome_arq1);
    while (i < TAM)
    {
        fputc(str[i], arq1);
        printf("%c", str[i]);
        fputc(str[i], arq3);
        TAM3++;
        i++;
    }

    fputc(str[i] = ' ', arq3);

    fclose(arq1);
    fclose(arq3);
    i = 0;
    TAM = 200;

    FILE *arq2 = fopen(nome_arq2, "w");
    arq3 = fopen(nome_arq3, "a");

    printf("\n\nString arq2:  ");
    fflush(stdin);
    fgets(str, TAM, stdin);
    TAM = strlen(str) - 1;

    printf("\n\nConteudo arq2 de nome %s\n", nome_arq2);
    while (i < TAM)
    {
        fputc(str[i], arq2);

        printf("%c", str[i]);
        fputc(str[i], arq3);
        i++;
        TAM3++;
    }


    fclose(arq2);
    fclose(arq3);

    arq3 = fopen(nome_arq3, "r");
    printf("\n\nConteudo arq3 de nome %s\n", nome_arq3);
    while (!feof(arq3))
    {
        fgets(str, TAM3, arq3);
        printf("%s", str);
    }

    return 0;
}
