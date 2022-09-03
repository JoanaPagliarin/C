#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Escreva um programa em C que se comporte como um
vírus. Esse programa irá duplicar as palavras digitadas em
uma frase. A frase deve possuir no máximo 30 caracteres.*/

int main()
{
    char str[30], str2[60];
    int i = 0;
    int k = 0;
    int guarda_posicao = 0;
    int tam = 0;

    printf("string:  ");
    gets(str);
    fflush(stdin);

    tam = strlen(str);

    while(str[i] != '\n' && str[i] != '\0')
        {
            guarda_posicao = i;

            for(int j = 0; j< 2; j++)
            {
                i = guarda_posicao;

                while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
                    {
                        str2[k] = str[i];
                        k++;
                        i++;
                    }


                while(str[i] == ' ' || i == tam)
                {
                    i++;
                    str2[k] = ' ';
                    k++;
                }

            }

        }

    printf("%s", str2);


    return 0;
}
