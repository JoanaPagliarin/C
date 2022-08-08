#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero;


    printf("digite um numero qualquer  ");
    scanf("%lf", &numero);


    if (numero > 0)
    {
        printf("o dobro do numero digitado eh %.2lf", numero*2);
    }

    else
    {
        printf("o tripo do numero digitado eh %.2lf", numero*3);
    }



    return 0;
}
