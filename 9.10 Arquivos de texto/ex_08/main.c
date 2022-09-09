#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*ler um arquivo com conteúdo e criar outro arquivo com o mesmo conteúdo, convertendo letras minusculas para maisculas
- nome do outro arquivo fornecido pelo usuario*/

int main()
{
    int i = 0, TAM = 200, caracteres = 0;
    char str[TAM], nome_arq2[20];

    printf("nome_arq2:   ");
    fflush(stdin);
    scanf("%[^\n]s", nome_arq2);
    FILE *arq2 = fopen(nome_arq2, "w");
    FILE *arq = fopen("arq.txt", "r");

    printf("Arq: \n");
    do
    {
        char c = fgetc(arq);
        printf("%c", c);

        /*while(c >= 0 && c <= 127)
        {caracteres++; break;}*/

        fputc(str[i] = toupper(c), arq2);
        i++;

    } while(!feof(arq));

    fclose(arq);
    fclose(arq2);
    arq2 = fopen(nome_arq2, "r");

    printf("\nArq2 de nome %s:\n", nome_arq2);
    while(!feof(arq2))
    {
        char c = fgetc(arq2);
        printf("%c", c);
    }

    fclose(arq2);

    return 0;
}
