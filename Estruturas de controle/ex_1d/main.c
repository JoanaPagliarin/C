#include <stdio.h>
#include <stdlib.h>

/*Calcule o logaritmo de 10 mais pr�ximo de um dado n�mero n. Para calcular
este valor conte quantas vezes pode�se dividir o n�mero por 10 at� que o
resultado da divis�o inteira seja menor igual  a 1.
Ex: 9/10 = 0 �> o logaritmo mais pr�ximo � 1 pois foi feita uma divis�o por 10 at�
atingir zero.
Note que este valor tamb�m indica o n�mero de d�gitos de um valor inteiro.*/


int main()
{
int contador = 0, printa = 1;
float resultado, n, numero;

printf("digite um valor n de valor minimo 0.1:  ");
scanf("%f", &n);
numero = n;

while(n > 5.0)
{
    resultado = n/10;
    n = resultado;
    contador++;
}

while(n < 0.50 && n >= 0.09)
{
    resultado = n/10;
    n = resultado;
    contador--;
}

if(numero < 0.09)
{
    printf("digite um valor valido\n");
    printa = 0;
}

if(printa != 0)
{
    printf("\nO logaritmo aproximado de %.2f na base 10 eh %d, pois o numero foi dividido por 10 (dez) %d vezes,", numero, contador, contador);
    printf("\nate que 10^%d fosse igual (ou se aproximasse) de %.2f\n", contador, numero);
}

    return 0;
}
