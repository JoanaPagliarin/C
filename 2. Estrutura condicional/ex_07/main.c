#include <stdio.h>
#include <stdlib.h>

int main()
{



float altura;
char sexo;

    printf("digite F para sexo feminino ou M para sexo masculino  ");
    scanf("%c", &sexo);


    if ((sexo == 'M') || (sexo == 'm'))
    {
        printf("qual eh a sua altura?  ");
        scanf("%f", &altura);
        printf("o seu peso eh %.2f", (72.7 * altura) - 58);
    }

    else
    {
        printf("qual eh a sua altura?  ");
        scanf("%f", &altura);
        printf("o seu peso eh %.2f", (62.1 * altura) - 44.7);

    }



    return 0;
}
