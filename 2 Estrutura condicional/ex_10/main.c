#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1, numero_2;


    printf("digite um primeiro valor:  ");
    scanf("%d", &numero_1);

    printf("digite um segundo valor:  ");
    scanf("%d", &numero_2);

    if (numero_1 > numero_2)
    {
        printf("%d", numero_1 - numero_2);
    }

    else
    {
        printf("%d", numero_2 - numero_1);
    }

    return 0;
}
