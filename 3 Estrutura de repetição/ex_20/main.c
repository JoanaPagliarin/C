#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*20. Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
são cachorros existentes na loja*/


int qntdd_gatos = 0, qntdd_cachorros = 0, total = 0, i;
char especie [10];

printf("qual a quantidade total de animais na loja?");
scanf("%d", &total);

    for (i = 1; i <= total; i++)
    {
        printf("o %do animal eh gato ou cachorro?\n", i);
        scanf("%s", especie);

        if (strcmp(especie,"gato") == 0)  /* se a string 1 é diferente da string 2, retorna 1*/

        {
            qntdd_gatos++;
        }

        else if (strcmp(especie,"cachorro") == 0)
        {
            qntdd_cachorros++;
        }

        else
        {
            printf("digite gato ou cachorro\n");
            i--;
        }
    }

    printf("a quantidade de gatos eh de %d e a quantidade de cachorros eh de %d", qntdd_gatos, qntdd_cachorros);




    return 0;
}
