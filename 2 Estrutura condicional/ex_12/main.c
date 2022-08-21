#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b, c;

    printf("digite um valor para o lado a:  ");
    scanf("%f", &a);

    printf("digite um valor para o lado b:  ");
    scanf("%f", &b);

    printf("digite um valor para o lado c:  ");
    scanf("%f", &c);

    if ((a+b<c) || (a+c<b) || (b+c<a))
    {
        printf("o triangulo nao eh possivel");
    }

    else if (a == b && a == c && b == c)
    {
        printf("o triangulo em questao eh equilatero");
    }

    else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
    {
        printf("o triangulo em questao eh isosceles");
    }

    else
    {
        printf("o triangulo em questao eh escaleno");
    }

    return 0;
}
