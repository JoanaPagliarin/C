#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float H, D, h, d;

    // H/D = h/d ==> H = h/D*d

    printf("qual é a sua altura?  ");
    scanf("%f", &h);
    printf("qual é o comprimento da sua sombra?  ");
    scanf("%f", &d);
    printf("qual é o comprimento da sombra do prédio?  ");
    scanf("%f", &D);

    printf("a altura do prédio é igual a %.2f", h/D*d);


    return 0;
}
