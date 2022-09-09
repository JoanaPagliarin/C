#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*strlen dá o total de caracteres e indica a posicao do /0;
se eu uso fgets este inclui um /n antes do /0, entao com fgets vai
retornar uma unidade numerica a mais*/
/*receber um arquivo de texto e mostrar quantas vezes cada elemento aparece dentro do arquivo*/

int main()
{
    int TAM = 200;
    char str[TAM];
    int i = 0, j = 0, count[127], achou;

    for(str[i] = 0; str[i] < 126; str[i]++)
    count[str[i]] = 1;

    FILE *arq = fopen("arq.txt", "w");
    printf("String:   ");
    fflush(stdin);
    fgets(str, TAM, stdin);
    TAM = strlen(str) - 1;

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

    while (i < TAM)
    {
        if (aux[str[i]] != 1 && str[i] != ' ' && str[i] != '\n')
        {
            printf("\n %c apareceu %d vezes", str[i], count[str[i]]);
            aux[str[i]] = 1;
        }
        i++;
    }

    return 0;
}
