#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    // ou pa = &a e pb = &b

    printf("a:  ");
    scanf("%d", pa);

    printf("b:  ");
    scanf("%d", pb);

    printf("soma: %d", *pa + *pb);

    return 0;
}
