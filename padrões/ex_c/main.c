#include <stdio.h>
#include <stdlib.h>

// imprimir triangulo de # 8x8 alinhado para cima e para direita


int main()
{

    int linha, coluna, i;

    for(linha = 0; linha <= 7; linha++)
    {
        for(i = 0; i <= linha - 1; i++)
        {
            printf("  ");
        }

        for(coluna = 7 - linha; coluna >= 0 ; coluna--)
        {
            printf("# ");
        }

        printf("\n");

    }


    return 0;
}
