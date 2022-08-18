#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.*/

int main()
{
    int v[6];
    int i, j;
    int aux;

    printf("digite 5 numeros:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }


//ordenando numeros
for (j = 5; j >= 0; j--)
{
     for(i = 0; i < 4 ; i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
}

for (i = 1; i < 4; i++)
{
    if (v[i] == v[i+1] || v[i] == v[i-1])
    {
        printf("%d se repete\n", v[i]);
    }
}


    return 0;
}

