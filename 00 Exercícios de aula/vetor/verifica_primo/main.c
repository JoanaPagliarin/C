#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

//determinar se um n�mero � primo
//um n�mero � primo se s� � divis�vel por 1 e por ele mesmo
//um n�mero N�O � primo se � divis�vel por algum n�mero menor que ele (div <= n-1), tirando o n�mero 1

    int n;
    int div;
    int eprimo;

    //eprimo == 1 : n�mero � primo
    //eprimo != 1 : n�mero n�o � primo

    printf("digite um n�mero inteiro:  ");
    scanf("%d", &n);

    div = 2;
    eprimo = 1;

    while ((div <= n - 1) && (eprimo)){

        if (n%div == 0)
            eprimo = 0;
            div++;
    }

    if (eprimo)
        printf("\n� primo!\n");

    else
        printf("\nN�o � primo\n");







    return 0;
}
