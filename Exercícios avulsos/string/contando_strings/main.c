#include <stdio.h>
#include <stdlib.h>

// contar numero de letras e palavras de uma string

int main()
{
    char str[60];
    int i = 0;
    int num_palavras = 0;

    printf("string:  ");
    gets(str);

    while(str[i] != '\n' && str[i] != '\0') //ou seja, enquanto a string nao acabar
    {
        while(str[i] == ' ') //enquanto eu encontrar espa�os
        {
            i++; //avan�o na minha posi��o at� encontrar uma letra
        }

        num_palavras++; //quando sai do la�o � pq encontrei uma letra e entao conto uma palavra

        while(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')//se encontrei uma letra
        {
            i++;//percorro a palavra at� o final dela
        }
    }


printf("numero de palavras: %d", num_palavras);




    return 0;
}
