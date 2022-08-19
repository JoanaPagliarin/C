#include <stdio.h>
#include <stdlib.h>

// imprimir triangulo de # 8x8 alihado para baixo e para a direita

int main()
{
 int linha, coluna, diferenca = -7;


    for(linha = 0; linha < 8; linha++)
    {
        for(coluna = 0; coluna < 8; coluna++)
        {
            if (linha - coluna > diferenca)
            {
                printf(" ");
            }

            else
            {
                printf("#");
            }

        }

        diferenca += 2;
        printf("\n");
    }



    return 0;
}
