#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int valor;
    struct lista *proximo;

}lista;

int main()
{
    lista m1, m2, m3;
    lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (lista*)0;

    while (gancho != (lista*)0)
    {
        printf("%d  ", gancho -> valor);
        gancho = gancho -> proximo;
    }


    return 0;
}
