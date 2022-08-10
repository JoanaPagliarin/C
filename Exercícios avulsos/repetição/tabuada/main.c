#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, a;

    printf("digite um numero para exibir a sua tabuada:  ");
    scanf("%d", &n);

    for (a = 1; a <= 10; a++)
        {

            printf("%d * %d = %d\n", n, a, n*a);

        }

    /* se n = 3, então n*1 =   |  n*2 =    | etc....*/



    return 0;
}
