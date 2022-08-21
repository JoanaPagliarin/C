#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso;

    printf("qual eh o seu peso?  ");
    scanf("%f", &peso);

    printf("se voce engordar 15 pontos percentuais, voce ficara com %.2f quilos", 1.15*peso);

    printf("\n");

    printf("se voce emagrecer 20 pontos percentuais, voce ficara com %.2f quilos", 0.8*peso);


    return 0;
}
