#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Leia o nome do usuário e escreva o nome dele na tela 10 vezes.*/


char nome [50];
int i;

    printf("digite seu nome:  ");
    scanf("%s", nome);

    for (i = 1; i <= 10; i++)
    {
        printf("%s\n", nome);
    }

    return 0;
}
