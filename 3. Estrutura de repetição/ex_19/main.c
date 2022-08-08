#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mos-
trar :

a. A menor altura do grupo;
b. A maior altura do grupo;*/


    float altura, altura_maior = 0, altura_menor = 100;
    int i;

    for (i = 1; i <= 15; i++)
    {
        printf("qual eh a altura da %da pessoa?\n", i);
        scanf("%f", &altura);

        if (altura > altura_maior)
        {
            altura_maior = altura;
        }

        else if (altura < altura_menor)
        {
            altura_menor = altura;
        }
    }

        printf("a altura maior eh de %.2f e a altura menor eh de %.2f", altura_maior, altura_menor);



    return 0;
}
