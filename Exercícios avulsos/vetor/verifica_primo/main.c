#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

//determinar se um número é primo
//um número é primo se só é divisível por 1 e por ele mesmo
//um número NÃO é primo se é divisível por algum número menor que ele (div <= n-1), tirando o número 1

    int n;
    int div;
    int eprimo;

    //eprimo == 1 : número é primo
    //eprimo != 1 : número não é primo

    printf("digite um número inteiro:  ");
    scanf("%d", &n);

    div = 2;
    eprimo = 1;

    while ((div <= n - 1) && (eprimo)){

        if (n%div == 0)
            eprimo = 0;
            div++;
    }

    if (eprimo)
        printf("\nÉ primo!\n");

    else
        printf("\nNão é primo\n");







    return 0;
}
