#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia os dados de um
funcionário e que aplique um aumento sobre o seu
salário, sendo que a empresa definiu um aumento de
10% para quem possuir mais de cinco anos de casa e for
casado, para os demais o aumento é de 8%. Esse aumento
deve ser calculado por uma função. Dados de entrada:
salário bruto, quantidades de anos na empresa, e estado
civil (C, c, S, s). Dados de saída: taxa do aumento, salário
inicial, e salário com aumento do funcionário.*/

    float reajuste (float salario, int anos, char estado_civil);

int main()
{
    float salario;
    int anos;
    char estado_civil;

    printf("qual seu salario?  ");
    scanf("%f", &salario);

    printf("quanto tempo na empresa?  ");
    scanf("%d", &anos);

    printf("\nestado civil? digite C para casado e S para solteiro:  ");
    fflush(stdin);
    scanf("%c", &estado_civil);

    printf("\salario: %.2f", reajuste(salario,anos,estado_civil));

    return 0;
}


float reajuste (float salario, int anos, char estado_civil)
{
    if (anos > 5 && estado_civil == 'C')
    {return salario * 1.1;}

    else
    {return salario * 1.08;}

}



