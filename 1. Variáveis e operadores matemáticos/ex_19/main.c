#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //pé direito = 1 chip de identificação = 4 reais
    //pé esquerdo = 2 chips de alimentação = 3,5 = 7 reais

    int frangos;

    printf("quantos frangos têm na sua granja?  ");
    scanf("%d", &frangos);

    printf("voce vai gastar %d reais para marcar todos os frangos", 4*frangos + 7*frangos);


    return 0;
}
