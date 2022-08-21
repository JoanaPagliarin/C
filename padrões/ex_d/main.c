#include <stdio.h>
#include <stdlib.h>

// imprimir triangulo de # 8x8 alihado para baixo e para a direita

int main()
{
 int linha, coluna, i;


    for(linha = 0; linha <= 7; linha++)
    {
        for(i = 7; i > linha; i--)
        {
            printf("  ");
        }

        for(coluna = 0; coluna <= linha; coluna++)
        {
            printf("# ");
        }

        printf("\n");
    }



    return 0;
}
