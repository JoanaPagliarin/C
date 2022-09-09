#include <stdio.h>
#include <stdlib.h>]
#include <string.h>
#define TAM 200

/*ler um arquivo com conteúdo e criar outro arquivo com o mesmo conteúdo, convertendo letras minusculas para maisculas
- nome do outro arquivo fornecido pelo usuario*/

int main()
{
    char str[TAM], nome_arq2[10];
    int i = 0;

    FILE *arq = fopen("arq.txt", "r");

    printf("nome_arq2:   ");
    fflush(stdin);
    fgets(nome_arq2, 10, stdin);
    FILE *arq2 = fopen(nome_arq2, "w");

    printf("Arq:  ");
    printf("\n");
    while(i < strlen(str))
    {
        printf("%c", str[i]);
        fputc(str[i] = toupper(str[i]), arq2);
        i++;
    }

    fclose(arq);
    fclose(arq2);
    arq2 = fopen(nome_arq2, "r");
    while(!feof(arq2))
    {
        fgets(str, TAM, arq2);
        printf("%s", str);

    }
    fclose(arq2);

    return 0;
}
