#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.*/

int main()
{
    int r = 0;
    int v[11], v_repetidos[r], v_num_repeticao[r];
    int i, j;
    int aux;


    //Zerando vetor
    for(i = 0; i < 11; i++)
    {
        v_repetidos[i] = 0;
        v_num_repeticao[i] = 0;
    }

    printf("digite 10 numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }


//ordenando numeros
    for (j = 9; j >= 0; j--)
    {
        for(i = 0; i < 9 ; i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }

//verificando repetições
    for (i = 0; i < 9; i++)
    {
        if(v[i] == v[i+1])
        {
            if (i == 0)
            {
                v_repetidos[r] = v[i];
                r++;
            }

            else if(v[i-1] != v[i] && i != 0)
            {
                v_repetidos[r] = v[i];
                r++;
            }

            else
            {
                v_num_repeticao[r - 1] += 1;
            }

        }
    }

    printf("\nNumeros repetidos:  ");

    for (i = 0; i < r; i++)
    {
        printf("%d repete %d vezes  ", v_repetidos[i], v_num_repeticao[i - 1]);
    }




    return 0;
}

