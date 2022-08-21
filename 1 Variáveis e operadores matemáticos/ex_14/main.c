#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio;
    float area;

    printf("qual o raio da pizza?  ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio,2);

    printf("a área da pizza é %.2f", area);





    return 0;
}
