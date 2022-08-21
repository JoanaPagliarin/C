#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   /*14. Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
a. resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
for igual a “Sim”.*/

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
