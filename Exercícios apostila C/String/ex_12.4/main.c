#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Desenvolva um programa para ler uma palavra de
no m�ximo 60 caracteres e fa�a o programa escrever
essa palavra de tr�s para frente.*/

int main()
{
    char str[60];
    char str2[60];
    int tam_strlen;
    int i = 0;

    printf("string:  ");
    gets(str);

    tam_strlen = strlen(str); // retorna posi��o do /0

    while (i < tam_strlen)
    {
        str2[i] = str[tam_strlen - 1 - i];
        i++;
    }

    printf("%s", str2);


    return 0;
}
