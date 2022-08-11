#include <stdio.h>
#include <stdlib.h>

//Dado um dígito, escrever o mesmo em código Morse.
/*
    1 . _ _ _ _ 1 ponto e 4 traços
    2 . . _ _ _ 2 pontos e 3 traços
    3 . . . _ _ 3 pontos e 2 traços
    4 . . . . _ 4 pontos e 1 traço
    5 . . . . . 5 pontos
    6 _ . . . . 1 traço e 4 pontos
    7 _ _ . . . 2 traços e 3 pontos
    8  _ _ _ . . 3 traços e 2 pontos
    9  _ _ _ _ . 4 traços e 1 ponto
    0 _ _ _ _ _  5 traços

*/


int main()
{
    int n[3], i = 0, j = 0;
    int ponto, traco, aux = 0;
    int digitos[10] = {1,2,3,4,5,6,7,8,9,0};


printf("digite um numero de 3 digitos:  ");
while (i < 3)
{
    scanf("%1d", &n[i]);
    i++;
}

for (i = 0; i < 3; i++)
{
    for (j = 0; j < 10; j++)
    {
        if (n[i] == digitos[j])
        {
            while (digitos[j] <= 5)
            {
                printf("%d = ", digitos[j]);

                for(ponto = 0; ponto <= j; ponto++)
                {
                    printf(". ");
                }

                for (traco = 0; traco < 5 - ponto; traco++)
                {
                    printf("- ");
                }

                printf("\n");
            }

            while ( digitos[j] > 5 && digitos[j] < 10)
            {
                printf("%d = ", digitos[j]);

                for(traco = 0; traco < digitos[j] - j + aux; traco++)
                {
                    printf("- ");
                }

                for (ponto = 0; ponto < 5 - traco; ponto++)
                {
                    printf(". ");
                }

                printf("\n");
            }

            if (digitos[j] == 0)
            {
                printf("0 = ");

                    for (traco = 0; traco < 5; traco++)
                    {
                        printf("- ");
                    }
            }
        }

        else
        {
            continue;
        }

    }
}

return 0;
}
