#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o chamada teste que recebe um valor inteiro positivo n como par�metro. Sua
fun��o deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor poss�vel.*/

void fatoracao(int n);

int main()
{
    int n;

    printf("Digite um numero n:  ");
    scanf("%d", &n);

    printf("\nResposta: ");
    fatoracao(n);

    printf("\n");


    return 0;

}

void fatoracao (int n)
{
    int div, numero, base, resultado, expoente, achou, a;

    numero = n;

    for (base = 2; base <= n; base ++)
    {
        resultado = 1;
        expoente = 0;

        while (resultado <= n)
        {
            resultado = resultado * base;
            expoente++;

            if (resultado == n)
            {

                if (achou == 1)
                {
                    break;
                }

                printf ("%d = %d^%d\n", n, base, expoente);
                achou = 1;

                if (expoente > 1)
                {
                    printf("Resposta expandida: ");

                    for (div = 2; div < numero; div++)
                    {
                        expoente = 0;

                        while (numero%div == 0)
                        {
                            a = numero/div;
                            numero = a;

                            expoente++;
                        }

                        printf("%d^%d  ", div, expoente);
                    }
                }

                break;
            }

            if (resultado > n)
            {
                break;
            }
        }
    }



}




