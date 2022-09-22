#include <stdio.h>
#include <stdlib.h>

typedef struct reg
{
    int conteudo;
    struct reg *prox;
} celula;

int main ()
{
    printf ("sizeof (celula) = %d\n",
    sizeof (celula));



    return 0;
}
