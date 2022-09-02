#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Desenvolva um programa que leia uma string de
no máximo 60 caracteres e verifique se ela é um
palíndromo. Uma palavra é palíndromo quando
ela pode ser lida da mesma forma da esquerda para
direita e da direita para esquerda.*/


int main()
{
    char string[60];
    char string2[60];
    int tamanho = 0;
    int i = 0;

    printf("string:  ");
    gets(string); // gets retorna exatamente o tamanho da palavra

    tamanho = strlen(string);

    while (i < tamanho)
    {
        string2[i] = string[tamanho - i - 1];
        i++;
    }

    printf("palavra invertida: %s\n", string2);

    if(strcmp(string2, string) == 0)
        printf("eh palindromo");

    else
        printf("nao eh palindromo");


    return 0;
}
