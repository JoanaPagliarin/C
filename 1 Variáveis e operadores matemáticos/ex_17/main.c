#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float graus_celsius;
    float graus_fahrenheit;

    printf("qual a temperatura em graus Celsius?  ");
    scanf("%f", &graus_celsius);

    printf("a temperatura em fahrenheit é %.2f", (((float)9/5)*graus_celsius) + 32);



//




    return 0;
}
