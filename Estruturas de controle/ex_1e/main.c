#include <stdio.h>
#include <stdlib.h>

//Dado um d�gito, escrever o mesmo em c�digo Morse.
/*
    1 . _ _ _ _ 1 ponto e 4 tra�os
    2 . . _ _ _ 2 pontos e 3 tra�os
    3 . . . _ _ 3 pontos e 2 tra�os
    4 . . . . _ 4 pontos e 1 tra�o
    5 . . . . . 5 pontos
    6 _ . . . . 1 tra�o e 4 pontos
    7 _ _ . . . 2 tra�os e 3 pontos
    8  _ _ _ . . 3 tra�os e 2 pontos
    9  _ _ _ _ . 4 tra�os e 1 ponto
    0 _ _ _ _ _  5 tra�os

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
