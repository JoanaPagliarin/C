#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("digite um n�mero inteiro  ");
    scanf("%d", &numero);

    // verdadeiro: se o numero for par e maior que 10
    // tambem verdadeiro: se o numero for �mpar e menor que 50
    // para ser par: div�sivel por 2 === inteiro ; se numero/2 ===> int


    if (((numero%2==0) && numero>10) || ((numero%2==1) && numero<50))
    {
        printf("sim");
    }

    else
    {
         printf("n�o");
    }





    return 0;
}
