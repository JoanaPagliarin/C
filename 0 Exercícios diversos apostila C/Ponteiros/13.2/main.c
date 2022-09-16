#include <stdio.h>
#include <stdlib.h>

//imprimir o conteudo de A e o endereço de memoria de a

int main()
{
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;

    printf("digite o valor de a:  ");
    scanf("%d", pa);

    printf("valor de a: %d", *pa);
    printf("\nendereco de a: %d", pa);
    printf("\nendereco de a: %d", &a);

    return 0;
}
