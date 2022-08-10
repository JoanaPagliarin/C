#include <stdio.h>
#include <stdlib.h>

void tabuada (int a, int b)
{
    for (b = 1; b <= 10 ; b++)
    {
        printf("\n");
        for (a = 1; a <= 10; a++)
        {
            printf("%d * %d = %d\n", b, a, b*a);
        }
    }
}

int main()
{

    int a, b;

    tabuada(a, b);

    return 0;
}
