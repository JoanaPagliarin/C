#include <stdio.h>
#include <stdlib.h>
#define N 5


/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando elementos repetidos*/

int main()
{
    int v[N], v2[N], i = 0, j = 0, k = 0;

    for(k = 0; k < N; k++)
    {v2[k] = 0;}
    k = 0;

    printf("vetor:  ");
    scanf("%d", &v[i]);

    while (i < N)
    {
        i++;
        scanf("%d", &v[i]);

        for (j = 0; j < i; j++)
        {
            if(v[i] != v[j])
            {
                v2[k] = v[j];
                printf("\nv2 = %d com k = %d  ", v2[k], k);
                k++;
                break;

            }
        }
    }


    printf("vetor sem os repetidos:  ");

    for (i = 0; i < k; i++)
    printf("%d  ", v2[i]);

    return 0;
}
