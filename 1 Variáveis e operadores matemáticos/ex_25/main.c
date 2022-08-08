#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // volume cilindro = 3,14*r²*h

    float altura;
    float raio;

    printf("qual é a altura do cilindro?  ");
    scanf("%f", &altura);

    printf("qual é o raio do cilindro?  ");
    scanf("%f", &raio);

    printf("o volume do cilindro é de %.2f unidades de medida", 3.14*altura*pow(raio,2));

    return 0;
}
