#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Escreva um programa em C que receba uma frase
qualquer fornecida pelo usuário, e que calcule e mostre
quantas palavras essa frase possui. A frase deve possuir
no máximo 50 caracteres.*/

int main()
{
    char str[60];
    int i = 0;
    int cont_palavra = 0;

    printf("string:  ");
    gets(str);

    while(str[i] != '\n' && str[i] != '\0') //enquanto houver string
    {
        while(str[i] == ' ')//enquanto eu achar espaço / acabou a palavra
        {
            i++;//avançarei na posição até encontrar uma letra
        }

        cont_palavra++; //encontrei uma palavra, soma 1

        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') //enquanto tiver letra eu estou na mesma palavra
        {
            i++; //percorro a palavra
        }
    }

    printf("%d", cont_palavra);


    return 0;
}
