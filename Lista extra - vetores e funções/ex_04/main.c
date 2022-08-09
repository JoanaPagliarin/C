#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número
primo que é menor ou igual a n.*/

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
    int verifica_primo = 1; //todos os números são primos até que se prove o contrário;
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
