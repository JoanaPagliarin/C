#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   /*14. Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a
a. resposta do usu�rio enquanto ele responde n�o. S� encerre a execu��o quando a resposta
for igual a �Sim�.*/

    char resposta [4];
    int i;
    char sim;
    char nao;

    do{

    printf("ola, tudo bem? responda sim ou nao:  ");
    scanf("%s", resposta);


    } while (!strcmp(resposta, "nao"));



    return 0;
}
