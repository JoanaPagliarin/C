#include <stdio.h>
#include <stdlib.h>

int main()
{

//imprimir o total de possibilidades para jogar 6 números, sendo a sequencia: par impar par impar par impar
    int contadora;


    for (int d1 = 2; d1 <= 60; d1 += 2)
    {
        for (int d2 = 1; d2 <= 60; d2 += 2)
        {
            for (int d3 = d1 + 2; d3 <= 60; d3 += 2)
            {

                for (int d4 = d2 + 2; d4 <= 60; d4 += 2)
                {

                    for (int d5 = d3 + 2; d5 <= 60; d5 += 2)

                    {
                        for (int d6 = d4 + 2; d6 <= 60; d6 += 2)
                        {
                            //printf("[%d %d %d %d %d %d]\n", d1, d2, d3, d4, d5, d6);
                            contadora++;
                        }

                    }
                }

            }
        }
    }

    printf("O numero total de possibilidades eh %d", contadora);


    return 0;
}
