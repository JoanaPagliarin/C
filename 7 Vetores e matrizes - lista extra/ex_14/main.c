#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.*/

int main()
{
    int v[11];
    int v_repetidos[11], v_num_repeticoes[11];
    int i = 0, j = 0, r = 0, k = 0;
    int contador = 0, indica_repetidos = 0;

    for(int i = 0; i < 10; i++)
    {
        v_num_repeticoes[i] = 1;
    }


    printf("Digite 10 numeros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);

        indica_repetidos = 0;
        j = 0;

        for (j = 0; j < i && i != 0; j++)
        {

            if(v[i] == v[j])
            {
                while (k < r - 1)
                {

                    if(v[i] == v_repetidos[k] && indica_repetidos == 0)
                    {
                        v_num_repeticoes[k] += 1;
                        indica_repetidos = 1;
                    }

                    k++;
                }

                k = 0;

                if(indica_repetidos == 0)
                {
                    v_repetidos[r] = v[i];
                    v_num_repeticoes[r] += 1;
                    contador++;
                    r++;
                    break;
                }
            }
        }
    }

    printf("\nNumeros repetidos:  ");
    for(r = 0; r < contador; r++)
    {
        printf("Numero %d repetiu %d vezes   ", v_repetidos[r], v_num_repeticoes[r]);
    }

    return 0;
}

