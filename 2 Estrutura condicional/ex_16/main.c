#include <stdio.h>
#include <stdlib.h>

int main()
{

    float saldo_medio;


    printf("qual foi o saldo medio do ano?   ");
    scanf("%f", &saldo_medio);

    if ((saldo_medio>0) && (saldo_medio<=200))
    {
        printf("nao ha valor para credito");
    }
    else if ((saldo_medio>=201) && (saldo_medio<=400))
    {
        printf("o credito sera de %.2f", saldo_medio*0.2);
    }
    else if  ((saldo_medio>=401) && (saldo_medio<=600))
    {
        printf("o credito sera de %.2f", saldo_medio*0.3);
    }
    else
    {
        printf("o creditos era de %.2f", saldo_medio*0.4);
    }

    return 0;
}
