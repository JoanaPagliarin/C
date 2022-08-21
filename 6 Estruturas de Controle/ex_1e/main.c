#include <stdio.h>
#include <stdlib.h>

/*Dado um dígito, escrever o mesmo em código Morse.
    1 . _ _ _ _ 1 ponto e 4 traços
    2 . . _ _ _ 2 pontos e 3 traços
    3 . . . _ _ 3 pontos e 2 traços
    4 . . . . _ 4 pontos e 1 traço
    5 . . . . . 5 pontos
    6 _ . . . . 1 traço e 4 pontos
    7 _ _ . . . 2 traços e 3 pontos
    8  _ _ _ . . 3 traços e 2 pontos
    9  _ _ _ _ . 4 traços e 1 ponto
    0 _ _ _ _ _  5 traços
*/

int main()
{
char str[1000];
int digitos = 0, ponto = 0, traco = 0, n;

printf("digite um numero:  ");
scanf("%s", str);

digitos = strlen(str); 

for(int i = 0; i < digitos; i++)
{
    switch(str[i])
    {
        case '1':
        printf("1 = . _ _ _ _");
        printf("\n");
        break;

        case '2':
        printf("2 = . . _ _ _");
        printf("\n");
        break;

        case '3':
        printf("3 =  . . . _ _ ");
        printf("\n");
        break;

        case '4':
        printf("4 = . . . . _ ");
        printf("\n");
        break;

        case '5':
        printf("5 = . . . . .");
        printf("\n");
        break;

        case '6':
        printf("6 = _ . . . .");
        printf("\n");
        break;

        case '7':
        printf("7 = _ _ . . . ");
        printf("\n");
        break;

        case '8':
        printf("8 =  _ _ _ . . ");
        printf("\n");
        break;

        case '9':
        printf("9 =  _ _ _ _ . ");
        printf("\n");
        break;

        case '0':
        printf("0 = _ _ _ _ _");
        printf("\n");
        break;
    }
}

return 0;
}
