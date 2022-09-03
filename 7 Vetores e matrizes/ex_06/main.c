#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuario um vetor com 10 posicões. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/


int main()
{
    int v[11]; // 10 numeros
    int aux;

    printf("digite 10 numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
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

    printf("maior: %d\n", v[9]);
    printf("menor: %d\n", v[0]);



    return 0;
}
