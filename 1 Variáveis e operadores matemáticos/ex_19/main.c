#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //p� direito = 1 chip de identifica��o = 4 reais
    //p� esquerdo = 2 chips de alimenta��o = 3,5 = 7 reais

    int frangos;

    printf("quantos frangos t�m na sua granja?  ");
    scanf("%d", &frangos);

    printf("voce vai gastar %d reais para marcar todos os frangos", 4*frangos + 7*frangos);


    return 0;
}
