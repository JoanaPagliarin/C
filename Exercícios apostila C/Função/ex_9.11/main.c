#include <stdio.h>
#include <stdlib.h>

//tabuada

void tabuada (int numero);

int main()
{
    int numero;

    printf("digite um numero:  ");
    scanf("%d", &numero);

    printf("TABUADA DO %d: \n", numero);

    tabuada(numero);


    return 0;
}

void tabuada (int numero)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
}
