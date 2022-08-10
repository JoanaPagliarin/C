#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*Fa¸ca um programa que lˆe um n´umero n e imprima os valores entre 2
e n, que s˜ao divisores de n.*/

int n, x;

printf("digite um numero n:   ");
scanf("%d", &n);

for (x = 2; x < n; x++)
{
    if (n%x == 0)
    {
         printf("%d eh divisor de %d e se encontra entre 2 e %d\n", x, n, n);
    }

}


    return 0;
}

