#include <stdio.h>
#include <stdlib.h>

int main()
{
 float dinheiro;
 float p_gas;

 printf("quanto vc tem de dinheiro?  ");
 scanf("%f", &dinheiro);

 printf("qual o valor do litro da gasolina?  ");
 scanf("%f", &p_gas);

 printf("com essa quantia de dinheiro, voce conseguira colocar aproximadamante %.2f litros de gasolina", dinheiro/p_gas);



    return 0;
}
