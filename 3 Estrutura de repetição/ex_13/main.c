#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*13. Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a soma desses
n�meros. Encerre a execu��o quando um n�mero negativo for digitado*/


int numero, numero_2 = 0, i;

do
{
    printf("digite um numero positivo:  \n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        numero_2 = numero + numero_2;

    }

    else
    {
        printf("a soma dos numeros digitados eh %d", numero_2);

    }


} while (numero > 0);





    return 0;
}
