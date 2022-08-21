#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João*/


    int salario = 1200;
    int conta_1 = 200;
    int conta_2 = 120;
    float multa = 1.02;

    printf("o que restará do seu salario eh %.2f", 1200 - ((200*1.02) + (120*1.02)));



    return 0;
}
