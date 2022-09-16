#include <stdio.h>
#include <stdlib.h>

/*ler 6 numeros e armazena-los em um vetor; conter ponteiros; imprimir os valores contidos no vetor; apresentar o endereço de memoria dos valores*/

int main()
{
    int v[6];
    int *p;

    for(int i = 0; i < 6; i++)
    {
        printf("Digite o %d valor do vetor:  ", i+1);
        scanf("%d", &v[i]);
        p = &v[0];
    }

    for(int i = 0; i < 6; i++)
    {
        printf("Valor %d: %d\n", i+1, *(p+i));
        printf("Endereco: %d\n", p++);
        printf("Endereco: %d\n", &v[i]);
        printf("Endereco de p: %p\n\n", &p);
    }


    return 0;
}
