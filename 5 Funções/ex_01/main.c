#include <stdio.h>
#include <stdlib.h>

// imprima o resultado de 2^0 até 10^10

void expoente_zero (int base)
{
    printf("\n%d do expoente 0 ate o expoente 10!\n", base);
    printf("%d ^ 0 = 1\n", base);
}

void expoente_crescente (int base, int expoente)
{
    double resultado = 1;

    for(int i = 1; i <= expoente; i++)
    {
        resultado = resultado * base;
    }

    printf("%d ^ %d = %.2lf\n", base, expoente, resultado);
}



int main()

{

    int base;
    int expoente;


    for(base = 2; base <= 10; base++)
    {
        expoente_zero (base);

        for(expoente = 1; expoente <= 10; expoente++)
        {
            expoente_crescente (base, expoente);
        }
    }




    return 0;
}
