#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse
arquivo possui.*/

int main()
{
    int i = 0, contador = 0;
    FILE *arq = fopen("arq.txt", "r");

    do
    {
        char c = fgetc(arq);

        if (c == '\n')
        {contador++;}

    } while(!feof(arq));

    printf("num linhas: %d ", contador);

    fclose(arq);

    return 0;
}
