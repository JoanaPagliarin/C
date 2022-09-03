#include <stdio.h>
#include <stdlib.h>

//imprimir uma ampulheta de "#" 7x7 envolvido pelas bordas de um quadrado

int main()
{

    int linha, coluna;

    //Primeira linha
    for(coluna = 0; coluna < 7; coluna++)
    printf("# ");


    //Bordas laterais
    for(linha = 1; linha <= 5; linha++)
    {
        printf("\n");
        coluna = 0;

        while(coluna <= 6)
        {
            if(coluna == 0 || coluna == 6 || linha == coluna || linha + coluna == 6)
            printf("# ");

            else
            printf("  ");

            coluna++;
        }
    }

    printf("\n");

    //Borda inferior
    for(coluna = 0; coluna < 7; coluna++)
    printf("# ");






    return 0;
}
