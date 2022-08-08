#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    // 8 de água e 2 de maracujá == 0,8 água e 0,2 maracuja


    float litro_suco;

    printf("qnts litros de suco voce quer fazer?  ");
    scanf("%f", &litro_suco);

    printf("serao neecessários %.2f litros de água e %.2f litros de suco de maracuja", 0.8*litro_suco, 0.2*litro_suco);



    return 0;
}
