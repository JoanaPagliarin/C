#include <stdio.h>
#include <stdlib.h>

int main()
{
    //imprimir uma tabela de algum caracter de acordo com o valor de linhas e colunas que o usuário oferecer

    int linha;
    int coluna;
    int l;
    int c;
    char x [2];

    printf("digite o numero de colunas de sua tabela: ");
    scanf("%d", &coluna);

    printf("digite o numero de linhas de sua tabela:  ");
    scanf("%d", &linha);

    printf("digite o caractere que deseja que sua tabela tenha:  ");
    scanf("%s", x);

    for (l = 1; l <= linha; l++)
    {

        printf("\n");

        for(c = 1; c <= coluna; c++)
        {
            printf("%s", x);

        }
    }



    return 0;
}
