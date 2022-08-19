#include <stdio.h>
#include <stdlib.h>

//imprimir triangulo de # 8x8 alinhado a esquerda

int main()
{

int linha, coluna;

for(linha = 0; linha < 8; linha++)
{
    for(coluna = 0; coluna < 8; coluna++)
    {
        if(linha >= coluna)
        {
            printf("# ");
        }
    }

    printf("\n");

}




    return 0;
}
