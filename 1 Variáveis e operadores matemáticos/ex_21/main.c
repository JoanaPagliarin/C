#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // lata de 350, lata de 600 e lata de 2L; x unidades de cada produto

    int unidade_350, unidade_600, unidade_2000;


    printf("quantas unidades de 350ml voce comprou?  ");
    scanf("%d", &unidade_350);

    printf("quantas unidades de 600ml voce comprou?  ");
    scanf("%d", &unidade_600);

    printf("quantas unidades de 2L voce comprou?  ");
    scanf("%d", &unidade_2000);

    printf("voce comprou, no total, %.2f litros de refrigerante", ((unidade_350*0.35) + (unidade_600*0.6) + (unidade_2000*2)));



    return 0;
}
