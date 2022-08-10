#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Quando ac˜oes s˜ao vendidas ou compradas por meio de um corretor, a
    comiss˜ao do corretor ´e muitas vezes calculada usando uma escala que
    depende do valor das a¸c˜oes negociadas. Escreva um programa calcule o
    valor da comiss˜ao a partir do valor da transa¸c˜ao informado pelo usu´ario,
    sabendo-se que o corretor cobra os valores indicados abaixo e que a
    comiss˜ao m´ınima ´e de R$ 39:
    At´e R$ 2.500,00, comiss˜ao de R$30+1,7%
    R$2.500,01 at´e R$6.250,00, comiss˜ao de R$56 + 0,66%
    R$6.250,01 at´e R$20.000,00, comiss˜ao de R$76 + 0,34%
    R$20.000,01 at´e R$50.000,00, comiss˜ao de R$100 + 0,22%
    R$50.000,01 at´e R$500.000,00, comiss˜ao de R$155 + 0,11%
    Mais que R$ 500.000,00, comiss˜ao de R$255 + 0,09%         IGUAL SEMPRE PRA DIREITA */





    float salario;

    printf("qual eh o seu salario?  ");
    scanf("%f", &salario);


    if ((salario*0.017) + 30 < 39)
    {
        printf("valor invalido");
    }


    else if (2500 >= salario)
    {
        printf("a sua comissao sera de %.2f",(salario*0.017) + 30);
    }

    else if ((2500 < salario) && (salario <= 6250))
    {
        printf("a sua comissao sera de %.2f",(salario*0.0066) + 56);

    }

    else if ((6250 < salario) && (salario <= 20000))
    {
        printf("a sua comissao sera de %.2f",((salario*0.0034) + 76));

    }

    else if ((20000 < salario) && (salario <= 50000))
    {
        printf("a sua comissao sera de %.2f",(salario*0.0022) + 100);

    }

    else if ((50000 < salario) && (salario <= 500000))
    {
        printf("a sua comissao sera de %.2f",(salario*0.0011) + 155);

    }
    else
    {
        printf("a sua comissao sera de %.2f",(salario*0.0009) + 255);

    }



    return 0;
}
