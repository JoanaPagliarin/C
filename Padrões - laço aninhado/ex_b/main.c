#include <stdio.h>
#include <stdlib.h>

// imprimir triangulo de # 8x8 alinhado para cima e para esquerda

int main()
{
    int linha, coluna;

    for(linha = 7; linha >= 0; linha--)
    {
        for(coluna = linha; coluna >= 0; coluna--)
        {
                printf("#  ");
        }

        printf("\n");
    }

    return 0;
}
