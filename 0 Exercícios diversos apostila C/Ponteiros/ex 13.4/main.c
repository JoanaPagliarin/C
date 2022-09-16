#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4], maior = -9999, menor = 9999;
    int *p, *pmaior = &maior, *pmenor = &menor;
    p = &v[0];

    for(int i = 0; i < 4; i++)
    {
        printf("Digite o %d valor do vetor:  ", i+1);
        scanf("%d", p);

        if (*p > *pmaior)
        pmaior = p; //passando o mesmo endereço

        else
        pmenor = p;

        p++;
    }

    printf("maior: %d\n", *pmaior);
    printf("menor: %d", *pmenor);

    return 0;
}
