#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_liquido;
    float salario_bruto;
    float horas_normais;
    float horas_extras;



    printf("quantas horas normais vc trabalhou hoje?  ");
    scanf("%f", &horas_normais);

    printf("quantas horas extras vc trabalhou hoje?  ");
    scanf("%f", &horas_extras);

    salario_bruto = 10*horas_normais + 15*horas_extras;
    salario_liquido = salario_bruto*0.9;

    printf("o seu salário bruto é de %.2f reais, enquanto seu salário líquido é de %.2f reais", salario_bruto, salario_liquido);


    return 0;
}
