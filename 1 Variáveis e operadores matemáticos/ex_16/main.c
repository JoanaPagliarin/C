#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //1 sanduiche = 2 queijo; 1 presunto; 1 hamburguer

    float peso_queijo, peso_presunto, peso_hamburguer;
    int sanduiches;

    peso_hamburguer = 100;
    peso_queijo = peso_presunto = 50;

    printf("quantos sandu�ches deseja fazer?  ");
    scanf("%d", &sanduiches);

    peso_queijo = sanduiches*2*peso_queijo;
    peso_presunto = sanduiches*1*peso_presunto;
    peso_hamburguer = sanduiches*1*peso_hamburguer;

    printf("o peso da por��o de sandu�ches ser� de %.2f", peso_queijo+peso_hamburguer+peso_presunto);
    printf("\n");
    printf("ser�o necess�rios tantos quilos de queijo, presunto e hamburguer, nessa ordem: %.2f, %.2 e %.2f", peso_queijo, peso_presunto, peso_hamburguer);


    return 0;
}
