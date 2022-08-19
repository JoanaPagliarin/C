#include <stdio.h>
#include <stdlib.h>

//imprimir quadrado 7x7, mas apenas as bordas

int main()
{
    int linha, coluna, diferenca = -5;

     for(linha = 0; linha < 6; linha++)
    {
        for(coluna = 0; coluna < 6; coluna++)
        {
            if(linha == 0)
            printf("# ");

            else if(linha == coluna + 1)
            printf("#");

            else if(linha - coluna != diferenca)
            printf("  ");

        }

        printf("\n");
        diferenca+=1;

    }

    return 0;
}
