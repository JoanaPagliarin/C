#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>,

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //carlos e andré não pagam centavos

    float conta_felipe;
    int conta_andre, conta_carlos;
    float conta;

    printf("qual o valor da conta?  ");
    scanf("%f", &conta);

    conta_carlos = conta_andre = conta/3;
    conta_felipe = (conta - 2*conta_andre);

    printf("felipe deverá pagar %.2f, enquanto carlos e andré pagam %d", conta_felipe, conta_carlos);


    return 0;
}
