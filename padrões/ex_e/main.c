#include <stdio.h>
#include <stdlib.h>

//imprimir quadrado 7x7, mas apenas as bordas

int main()
{
int linha, coluna;

 //Borda superior
for(coluna = 0; coluna < 7; coluna++)
printf("# ");

//Bordas laterais
for(linha = 1; linha <= 5; linha++)
{
    printf("\n");
    coluna = 0;

    while(coluna <= 6)
    {
        if(coluna == 0 || coluna == 6)
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
