#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

/*receber um arquivo de texto e mostrar quantas vezes cada elemento aparece dentro do arquivo*/

int main()
{
    char str[TAM];
    int i = 0, j = 0, count[127], achou;

    for(str[i] = 1; str[i] < 126; str[i]++) //tabela ASCII vai de 1 a 126
    {count[str[i]] = 1;} //cada elemento aparece pelo menos uma vez

    FILE *arq = fopen("arq.txt", "w");
    printf("String:   ");
    fflush(stdin);
    fgets(str, TAM, stdin);

    while (i < TAM)
    {
        fputc(str[i], arq);

        for(j = 0; j < i && achou == 0; j++)
        {
            if (str[i] == str[j])
            {
                count[str[i]] += 1;
                achou = 1;
            }
        }

        i++;
        achou = 0;
    }


    fclose(arq);
    i = 0;
    int aux[127];

    for(str[i] = 0; str[i] < 127; str[i]++)
    {aux[str[i]] = 0;}

    while (i < strlen(str))
    {
        if (aux[str[i]] == 0 && str[i] != ' ' && str[i] != '\n')
        {
            printf("\n ""%c"" apareceu %d vezes", str[i], count[str[i]]);
            aux[str[i]] = 1;
        }

        i++;
    }


    return 0;
}
