#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{


    float peso;

    printf("qual � o seu peso, em quilos?  ");
    scanf("%f", &peso);

    printf("o seu peso, em gramas, � de %.2f", peso*1000);




    return 0;
}
