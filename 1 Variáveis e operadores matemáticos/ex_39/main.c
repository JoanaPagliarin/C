#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a
um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o*/


    int salario = 1200;
    int conta_1 = 200;
    int conta_2 = 120;
    float multa = 1.02;

    printf("o que restar� do seu salario eh %.2f", 1200 - ((200*1.02) + (120*1.02)));



    return 0;
}
