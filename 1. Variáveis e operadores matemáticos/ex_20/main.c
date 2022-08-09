#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // 1 blusa = 3 novelos
    // 1 novelo = 10 reais

    int numero_blusas;

    printf("quantas blusas voce deseja fazer?  ");
    scanf("%d", &numero_blusas);

    printf("voce vai gastar %d reais para fazer essa quantidade de blusas", 10*3*numero_blusas);



    return 0;
}
