#include <stdio.h>
#include <stdlib.h>

void numero_positivo (int n, int numero);
void numero_negativo (int n, int numero);

int main()
{
    int n, numero;

    printf("digite um valor n:  ");
    scanf("%d", &n);

    if (n > 0)
    {
        numero_positivo(n, numero);
    }

    else
    {
        numero_negativo(n, numero);
    }

    return 0;

}

void numero_positivo (int n, int numero)
{
    numero = n;

    int div, divisores = 0, aux[1000], i = 0;

    for (div = 2; div < n; div++)
    {
        if (n%div == 0)
        {
            divisores++;
            aux[i] = div;
            i++;
        }
    }

    if (divisores == 0)
    {
        printf("%d eh primo\n", n);
    }

    else
    {
        printf("\nDivisores de %d: 1  ", numero);

        for (i = 0; i < divisores; i++)
        {
            printf("%d  ", aux[i]);
        }

        printf("%d  ", numero);
        printf("\n");
    }

    printf("\n");

    int k, j, contador = 0;
    int sair;

    for(k = 0; k < divisores; k++)

        {
            sair = 1;

            if (sair == 1 && contador < divisores/2)
            {

                for(j = divisores - k - 1; j >= 0; j--)
                {
                    printf("%d = %d x %d \n", numero, aux[j], aux[k]);
                    printf("%d = -%d x -%d \n", numero, aux[j], aux[k]);
                    sair = 0;
                    contador++;

                    if (sair == 0)
                    {
                        break;
                    }
                }
            }
        }
}

void numero_negativo(int n, int numero)
{
    numero = n;

    int div, divisores = 0, aux[1000], i = 0;

    for (div = 2; div < (-n); div++)
    {
        if ((-n)%div == 0)
        {
            divisores++;
            aux[i] = div;
            i++;
        }
    }

    if (divisores == 0)
    {
        printf("%d eh primo\n", n);
    }

    else
    {
        printf("\nDivisores de %d: 1  ", numero);

        for (i = 0; i < divisores; i++)
        {
            printf("%d  ", aux[i]);
        }

        int numero_positivo;

        printf("%d", numero*(-1));
        printf("\n");
    }


    printf("\n");

    int k, j, contador = 0;
    int sair;

    for(k = 0; k < divisores; k++)

        {
            sair = 1;

            if (sair == 1 && contador < divisores/2)
            {

                for(j = divisores - k - 1; j >= 0; j--)
                {
                    printf("%d = -%d x %d \n", numero, aux[j], aux[k]);
                    printf("%d = %d x -%d \n", numero, aux[j], aux[k]);
                    sair = 0;
                    contador++;

                    if (sair == 0)
                    {
                        break;
                    }
                }
            }
        }
}
















