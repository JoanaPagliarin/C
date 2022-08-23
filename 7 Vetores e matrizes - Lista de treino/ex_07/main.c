#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posicaoo que ele se encontra. */

int main()
{
    int v[11]; // 10 numeros
    int v_original[11];
    int aux;
    int posicao_maior = 0;
    int posicao_menor = 0;

    printf("digite 10 numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        v_original[i] = v[i];
    }

    for (int j = 9; j >= 0; j--)
    {
        for(int i = 0; i < 9; i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[9] == v_original[i])
        {
            posicao_maior = i;
        }

        else if (v[0] == v_original[i])
        {
            posicao_menor = i;
        }
    }


    printf("maior: %d, posicao: %d\n", v[9], posicao_maior + 1);
    printf("menor: %d, posicao: %d\n", v[0], posicao_menor + 1);

    return 0;
}
