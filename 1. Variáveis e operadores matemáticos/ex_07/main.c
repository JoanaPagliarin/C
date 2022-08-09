#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    int mes;


    printf("que dia eh hoje?   ");
    scanf("%d", &dia);


    if (dia == 30)
    {
        printf("que mes estamos, em numero?  ");
        scanf("%d", &mes);
        printf("ja vivemos %d dias desde o inicio do ano", mes*30);

    }


    else if (dia < 30)
    {
        printf("que mes estamos, em numero?  ");
        scanf("%d", &mes);
        printf("ja vivemos %d dias desde o inicio do ano", (30*(mes-1) + dia));

    }

    else if (dia > 30 || dia < 1)
    {
        printf("digite um valor valido, ou seja, entre 1 e 30");

    }

//estrutura de repetição
    return 0;
}



