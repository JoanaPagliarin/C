#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.*/

int main()
{
    int v[11], v_repetidos[121];
    int i = 0, j = 0, m = 0, k = 0, contador = 0;

    printf("digite 10 numeros:\n");

    for (; i < 10; i++)
    {
        scanf("%d", &v[i]);

        for (j = 0 ; j < i; j++)
            {
                if (v[i] == v[j] && i != 0)
                {
                    for(k = 0; k < m + 1; k++)
                    {
                        if(v_repetidos[m] != v[k])
                        {
                            contador++;
                        }

                        else
                        {
                            v_repetidos[m] = v[i];
                        }
                    }

                    m++;

                }
            }
    }


    printf("contador: %d\n", contador);

    m = 0;

    while(m < contador)
    {
        printf("\nrepetidos: %d  ", v_repetidos[m]);
        m++;
    }



    return 0;
}
;
