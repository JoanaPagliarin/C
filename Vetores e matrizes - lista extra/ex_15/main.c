#include <stdio.h>
#include <stdlib.h>

/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando elementos repetidos*/

int main()
{
    int v[21];
    int v2[21];
    int i, j, r = 0, contador = 0, achou = 0;

    printf("Digite 10 numeros:\n");

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &v[i]);

        j = 0;
        achou = 0;

        while ( j < i )
        {
            if(v[i] == v[j])
            {
                achou = 1;
                break;
            }

            else
            {
                j++;
                achou = 0;
            }
        }

        if(achou == 0)
        {
            v2[r] = v[i];
            r++;
            contador++;
        }
    }

    printf("\nVetor sem repeticao:  ");
    for(r = 0; r < contador; r++)
    {
        printf("%d  ", v2[r]);
    }


    return 0;
}
