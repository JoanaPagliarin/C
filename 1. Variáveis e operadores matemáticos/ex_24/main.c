#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    // 8 de �gua e 2 de maracuj� == 0,8 �gua e 0,2 maracuja


    float litro_suco;

    printf("qnts litros de suco voce quer fazer?  ");
    scanf("%f", &litro_suco);

    printf("serao neecess�rios %.2f litros de �gua e %.2f litros de suco de maracuja", 0.8*litro_suco, 0.2*litro_suco);



    return 0;
}
