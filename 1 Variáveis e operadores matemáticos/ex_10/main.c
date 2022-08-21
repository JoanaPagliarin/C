#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double x_a, y_a;
    double x_b, y_b;


    printf("qual o valor da abscissa do ponto A?  ");
    scanf("%lf", &x_a);

    printf("qual o valor da abscissa do ponto B?  ");
    scanf("%lf", &x_b);

    printf("qual o valor da ordenada do ponto A?  ");
    scanf("%lf", &y_a);

    printf("qual o valor da ordenada do ponto B?  ");
    scanf("%lf", &y_b);


    printf("a distancia entre os pontos A e B eh de %.2lf unidades", sqrt(pow((x_a-x_b),2) + pow((y_a-y_b),2)));


    return 0;
}
