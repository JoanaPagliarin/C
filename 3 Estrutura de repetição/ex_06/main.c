#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Leia a idade de 20 pessoas e exiba a média das idades.*/

    int idade, i, resultado = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("digite a %da idade:  ", i);
        scanf("%d", &idade);
        resultado = resultado + idade;
    }

        printf("a media  das idades informadas eh %d", resultado/20);

    return 0;
}
