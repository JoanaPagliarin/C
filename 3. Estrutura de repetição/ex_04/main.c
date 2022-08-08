#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes.*/

    char nome [50];
    int n;
    int i;

    printf("digite seu nome:  ");
    scanf("%s", nome);

    printf("digite um numero:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%s\n", nome);
    }




    return 0;
}
