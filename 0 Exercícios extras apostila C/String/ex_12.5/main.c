#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Escreva um programa em C que receba uma frase
qualquer fornecida pelo usu�rio, e que calcule e mostre
quantas palavras essa frase possui. A frase deve possuir
no m�ximo 50 caracteres.*/

int main()
{
    char str[60];
    int i = 0;
    int cont_palavra = 0;

    printf("string:  ");
    gets(str);

    while(str[i] != '\n' && str[i] != '\0') //enquanto houver string
    {
        while(str[i] == ' ')//enquanto eu achar espa�o / acabou a palavra
        {
            i++;//avan�arei na posi��o at� encontrar uma letra
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
