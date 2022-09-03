#include <stdio.h>
#include <stdlib.h>

//imprimir um z de "#" 7x7


int main()
{
    int linha, coluna;

    //Primeira linha
    for(coluna = 0; coluna < 7; coluna++)
    printf("# ");

    for(linha = 1; linha <= 5; linha ++)
    {
        printf("\n");
        printf("  ");

        for(coluna = 1; coluna <= 5; coluna++)
        if (linha + coluna == 6)
        printf("# ");

        else
        printf("  ");
    }

    //Última linha
    printf("\n");

    for(coluna = 0; coluna < 7; coluna++)
    printf("# ");

    return 0;
}
