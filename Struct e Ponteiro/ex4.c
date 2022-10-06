#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x=10;
    int *p1 = &x;

    printf("Endereco de x (&x): %d\n", &x); //endereco de x
    printf("Endereco de x (p1): %d\n", p1); //endereco de x
    printf("Conteudo do endereco de x ( *(&x) ): %d\n", *(&x)); // 10
    printf("Endereco do conteudo de p1 ( &(*p1) ): %d\n", &(*p1)); // endereco de x
}