#include <stdio.h>
#include <stdlib.h>

// imprimir triangulo de # 8x8 alinhado para cima e para esquerda

int main()
{
    int linha, coluna, diferenca = -7;

    for(linha = 0; linha < 8; linha++)
    {
        for(coluna = 0; coluna < 8; coluna++)
        {
            if (linha - coluna >= diferenca)
            {
                printf("#  ");
            }

        }

        printf("\n");
        diferenca += 2;
    }




    return 0;
}
