#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A, B;

    printf("digite um valor inteiro para A  ");
    scanf("%d", &A);

    printf("digite um valor inteiro para B  ");
    scanf("%d", &B);


    if (A == B)
    {
        printf("a soma de A+B � igual a %d", A+B);
    }

    else
    {
        printf("a multiplica��o A*B � igual a %d", A*B);
    }


    return 0;
}

