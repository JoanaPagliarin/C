#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{


    float peso;

    printf("qual é o seu peso, em quilos?  ");
    scanf("%f", &peso);

    printf("o seu peso, em gramas, é de %.2f", peso*1000);




    return 0;
}
