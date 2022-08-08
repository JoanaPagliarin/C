#include <stdio.h>
#include <stdlib.h>

int main()
{
    float taxa_1989 = 0.01, taxa_1990_mais = 0.015;
    int ano;
    float valor_tabela;

    printf("qual eh o valor de tabela do seu carro?  ");
    scanf("%f", &valor_tabela);

    printf("qual eh o ano do seu carro?  ");
    scanf("%d", &ano);

    if (ano <= 1989)
    {
        printf("o imposto a ser pago eh de %.2f", valor_tabela*0.01);
    }
    else
    {
        printf("o imposto a ser pago eh de %.2f", valor_tabela*0.015);
    }



    return 0;
}
