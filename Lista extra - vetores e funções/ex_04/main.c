#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o que recebe um n�mero inteiro n passado por par�metro e devolve o maior n�mero
primo que � menor ou igual a n.*/

void numPrimos(numero);


int main ()
{
    int numero;

    printf("digite um numero de 1 ate 100:  ");
    scanf("%d", &numero);

    numPrimos(numero);

    return 0;

}


void numPrimos(int numero)
{
    int v[100];
    int verifica_primo = 1; //todos os n�meros s�o primos at� que se prove o contr�rio;
    int d;  //divisor

    for(; numero >= 1; numero--)
    {
        verifica_primo = 1;

        for(d = 2; d <= numero - 1; d++)
        {
            if(numero%d == 0)
            {
                verifica_primo = 0;
                break;
            }
        }

        if(verifica_primo == 1)
        {
            printf("%d   ", numero);
            break;

        }
    }
}
