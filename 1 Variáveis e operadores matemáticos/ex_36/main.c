#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario_minimo, salario_funcionario;

    printf("qual eh o valor do salario_minimo?  ");
    scanf("%f", &salario_minimo);

    printf("qual eh o valor do seu salario?  ");
    scanf("%f", &salario_funcionario);


    printf("voce recebe um total de %.2f salarios minimos", salario_funcionario/salario_minimo);



    return 0;
}
