#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // volume cilindro = 3,14*r�*h

    float altura;
    float raio;

    printf("qual � a altura do cilindro?  ");
    scanf("%f", &altura);

    printf("qual � o raio do cilindro?  ");
    scanf("%f", &raio);

    printf("o volume do cilindro � de %.2f unidades de medida", 3.14*altura*pow(raio,2));

    return 0;
}
