#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Desenvolva um programa que leia duas strings de
tamanho m�ximo de 60 caracteres e informe se essas
duas frases s�o iguais.*/

int main()
{
char str1[60], str2[60];

printf("str1:  ");
fgets(str1, 60, stdin);

printf("\nstr2:  ");
fgets(str2, 60, stdin);

if (strcmp(str1,str2) == 0)
{
    printf("\nAs strings sao iguais");
}

else
{
    printf("\nAs strins sao diferentes");
}

    return 0;
}
