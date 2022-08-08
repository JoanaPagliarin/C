#include <stdio.h>
#include <stdlib.h>

int main()

{

    float nota_1, nota_2, nota_3;

    printf("qual foi sua nota na prova 1?  ");
    scanf ("%f", &nota_1);

    printf("qual foi sua nota na prova 2?  ");
    scanf ("%f", &nota_2);

    printf("qual foi sua nota na prova 3?  ");
    scanf ("%f", &nota_3);

    printf("a sua nota final foi de %.2f pontos",(nota_1*1 + nota_2*2 +  nota_3*3)/6 );

    return 0;
}
