#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int valor;
    struct lista *proximo;
} lista;

struct lista *procurarValor (lista *pLista, int valor);

int main()
{
    struct lista *procurarValor (lista *pLista, int valor);
    lista m1, m2, m3;
    lista *resultado, *gancho = &m1;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (lista*)0;

    int valor;
    printf("digite o valor a ser procurado:   ");
    scanf("%d", &valor);
    resultado = procurarValor(gancho, valor);

    if (resultado == (lista*)0)
    printf("valor nao encontrado");

    else
    printf("%d  ", resultado -> valor);

    return 0;
}

struct lista *procurarValor (lista *pLista, int valor)
{
    while (pLista != (lista*)0)
    {
        if (pLista -> valor == valor)
            return pLista;

        else
            pLista = pLista -> proximo;
    }

    return (lista*)0;
};
