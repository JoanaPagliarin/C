#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("digite um valor qualquer  ");
    scanf("%d", &numero);


    if (numero%2 == 0)
    {
        printf("o valor digitado eh par");
    }

    else
    {
        printf("o valor digitado eh impar");
    }



    return 0;
}
