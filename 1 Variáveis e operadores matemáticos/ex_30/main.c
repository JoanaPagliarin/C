#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float salario_fixo;
    int numero_vendas;
    float salario_final;



    printf("qual o seu salario fixo?  ");
    scanf("%f", &salario_fixo);

    printf("qual o numero de vendas q voce fez?  ");
    scanf("%d", &numero_vendas);


    salario_final = (salario_fixo + ((float)0.04*salario_fixo*numero_vendas));

    printf("o seu salario final eh de %.2f reais", salario_final);


    return 0;
}
