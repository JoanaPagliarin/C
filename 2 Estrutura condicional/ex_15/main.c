#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cargo;
    float salario;
    float reajuste_101 = 1.1, reajuste_102 = 1.2, reajuste_103 = 1.3, reajuste_extra = 1.4;

    printf("Digite o seu salario:  ");
    scanf("%f", &salario);


    printf("Digite 101 para cargo de gerente, 102 para engenheiro e 103 para tecnico:   ");
    scanf("%d", &cargo);


    switch (cargo){
        case 101:
                 printf("o seu salario reajustado sera de %.2f", salario*1.1);
                 break;

        case 102:
                printf("o seu salario reajustado sera de %.2f", salario*1.2);
                break;

        case 103:
                printf("o seu salario reajustado sera de %.2f", salario*1.3);
                break;

        default:
                printf("o seu salario reajustado sera de %.2f", salario*1.4);

    }

    return 0;
}
