#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int moeda_1, moeda_5, moeda_10, moeda_25, moeda_50, moeda_1_real;


    // 100 moedas de 1 centavo = 1 real ----> moeda_1/100
    // 20 moedas de 5 centavos = 1 real
    // 4 moedas de 25 centavos = 1 real
    // 2 moedas de 50 centavos = 1 real


    printf("quantas moedas de 1 centavo voce tem?  ");
    scanf("%d", &moeda_1);

    printf("quantas moedas de 5 centavos voce tem?  ");
    scanf("%d", &moeda_5);

    printf("quantas moedas de 10 centavos voce tem?  ");
    scanf("%d", &moeda_10);

    printf("quantas moedas de 25 centavos voce tem?  ");
    scanf("%d", &moeda_25);

    printf("quantas moedas de 50 centavos voce tem?  ");
    scanf("%d", &moeda_50);

    printf("quantas moedas de 1 real voce tem?  ");
    scanf("%d", &moeda_1_real);

    printf("no total, voce tem %.2f reais", (moeda_1/100.0) + ((float)moeda_5/20) + (moeda_10/10.0) + (moeda_25/4.0) + (moeda_50/2.0) + moeda_1_real);



    return 0;
}
