#include <stdio.h>
#include <stdlib.h>

// Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.

int main()
{
    int v[11]; // 10 numeros
    int pares = 0;

    printf("digite 10 numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);

        if(v[i]%2 == 0)
        pares++;
    }

    printf("\npares: %d", pares);



    return 0;
}
