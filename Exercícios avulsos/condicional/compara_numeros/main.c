#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float numero_1, numero_2, numero_3;

    printf("digite um primeiro numero  ");
    scanf("%f", &numero_1);

    printf("digite um segundo numero  ");
    scanf("%f", &numero_2);

    printf("digite um terceiro numero  ");
    scanf("%f", &numero_3);


    if (numero_1>numero_2  && numero_1>numero_3)
    {
        printf("o %f é o maior", numero_1);
    }

    else if (numero_2>numero_1 && numero_2>numero_3)
    {
        printf("o %f é o maior", numero_2);
    }

    else
    {
        printf("o %f é o maior", numero_3);
    }







    return 0;
}
