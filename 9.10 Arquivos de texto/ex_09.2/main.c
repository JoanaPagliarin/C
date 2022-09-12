#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq1 = fopen("teste1.txt", "w+");
    FILE *arq2 = fopen("teste2.txt", "w+");
    FILE *arq3 = fopen("teste3.txt", "w");

    char linha[100];
    char letra;


    printf("Arquivo 1:\n");
    do {
        // le uma linha
        gets(linha);

        if(strcmp(linha, "0") != 0) {
            fprintf(arq1, "%s", linha);
            fprintf(arq1, "%s", "\n");
        }

    } while(strcmp(linha, "0") != 0);


    printf("Arquivo 2:\n");
    do {
        // le uma linha
        gets(linha);

        if(strcmp(linha, "0") != 0) {
            fprintf(arq2, "%s", linha);
            fprintf(arq2, "%s", "\n");
        }

    } while(strcmp(linha, "0") != 0);


    // rebobinar os arquivos
    rewind(arq1);
    rewind(arq2);


    // copiar o arq1 para arq3
    while( fscanf(arq1, "%c", &letra) != EOF ) {
        fprintf(arq3, "%c", letra);
    }

    // grava um espaco
    fprintf(arq3, "%c", '\n');

    // copiar o arq2 para arq3
    while( fscanf(arq2, "%c", &letra) != EOF ) {
        fprintf(arq3, "%c", letra);
    }

    close(arq1);
    close(arq2);
    close(arq3);

    return 0;
}
