#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


float main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_inicial;
    float salario_aumento;
    float salario_impostos;

    printf("qual o seu sal�rio?  ");
    scanf("%f", &salario_inicial);

    salario_aumento = salario_inicial*1.15;
    salario_impostos = salario_aumento*0.92;

    printf("o seu sal�rio inicial � de %.2f reais. Ap�s o aumento, ser� de %.2f. Depois de descontar os impostos, ser� de %.2f", salario_inicial, salario_aumento, salario_impostos);

    return 0;
}
