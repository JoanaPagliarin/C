#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano_nasceu, ano_atual;

    printf("em qual ano voce nasceu?  ");
    scanf("%d", &ano_nasceu);

    printf("em que anos estamos atualmente?  ");
    scanf("%d", &ano_atual);

    printf("em anos, a sua idade é de %d", ano_atual-ano_nasceu);

    printf("\n");

    printf("em meses, a sua idade é de %d", (ano_atual-ano_nasceu)*12);

    printf("\n");

    printf("em dias, a sua idade é de %d",(ano_atual-ano_nasceu)*12*30);

    printf("\n");

    printf("em semanas, a sua idade é de %d", (ano_atual-ano_nasceu)*12*4);








    return 0;
}
