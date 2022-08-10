#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* potencia usando laço de repetição */

    int base, expoente, resultado = 1;

    printf("base:  ");
    scanf("%d", &base);

    printf("expoente:  ");
    scanf("%d", &expoente);


    for(int i = 0; i < expoente; i++)
    {
        resultado = resultado * base;
    }

    printf("resultado eh %d", resultado);





    return 0;
}
