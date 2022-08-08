#include <stdio.h>
#include <stdlib.h>

int main()
{
    //padaria

    int num_paes;
    int num_broas;

    float p_pao = 0.12;
    float p_broa = 1.5;

    printf("quantos paes foram vendidos hoje?  ");
    scanf("%d", &num_paes);

    printf("quantas broas foram vendidas hoje?  ");
    scanf("%d", &num_broas);

    printf("A arrecadacao ao final do dia foi de: %.2f", num_paes*p_pao + num_broas*p_broa);

    printf("\n\n");

    printf("O investimento vai ser de %.2f", (num_paes*p_pao + num_broas*p_broa)*0.1);



    return 0;
}
