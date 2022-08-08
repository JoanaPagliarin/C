#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;

    printf("digite um valor qualquer  ");
    scanf("%d", &numero);


    if (numero%2 == 0)
    {
        printf("%d", numero+5);
    }

    else
    {
        printf("%d", numero+8);
    }




    return 0;
}
