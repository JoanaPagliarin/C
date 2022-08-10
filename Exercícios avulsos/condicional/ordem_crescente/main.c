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

    if (numero_1>numero_2  && numero_1>numero_3 && numero_2>numero_3) //321
    {
        printf("os numeros em ordem crescente sao %.2f, %.2f e %.2f", numero_3, numero_2, numero_1);
    }


    else if (numero_1>numero_2  && numero_1>numero_3 && numero_3>numero_2) //231
    {
        printf("os numeros em ordem crescente sao %.2f, %.2f e %.2f", numero_2, numero_3, numero_1);

    }


    else if (numero_2>numero_1 && numero_2>numero_3 && numero_1>numero_3) //312
    {
        printf("os numeros em ordem crescente sao %.2f, %.2f e %.2f", numero_3, numero_1, numero_2);

    }

    else if (numero_2>numero_1 && numero_2>numero_3 && numero_3>numero_1) //132
    {
        printf("os numeros em ordem crescente sao %.2f, %.2f e %.2f", numero_1, numero_3, numero_2);

    }

    else if (numero_3>numero_1 && numero_3>numero_2 && numero_1>numero_2) // 213
    {
        printf("os numeros em ordem crescente sao %.2f, %.2f e %.2f", numero_2, numero_1, numero_3);

    }

    else //123
    {
        printf("os numeros em ordem crescente sao %.2f, %.2f e %.2f", numero_1, numero_2, numero_3);
    }


    return 0;
}
