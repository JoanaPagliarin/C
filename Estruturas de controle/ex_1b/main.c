#include <stdio.h>
#include <stdlib.h>

/*)Dado os numeros n e m (digitados pelo usuário) , escreva a tabuada de n de
1 até  m .
Ex.: n = 2 , m = 20 faz a tabuada de 2 de 1 a 20.
Restrinja a entrada de dados de maneira que caso seja digitado um valor menor
que 2 e maior que 9 seja exibida uma mensagem de aviso e não calcule a
tabuada.*/


int main()
{

int n, m;

printf("digite um numero n:  ");
scanf("%d", &n);

if ((n < 2) || (n > 9))
{
    printf("\nDigite um numero igual ou maior que 2 e menor ou igual a 9\n");
}

else
{
    printf("\ndigite um numero m: ");
    scanf("%d", &m);

    for(int i = 1; i <= m; i++)
    {
        printf("%d x %d =  %d\n", n, i, n*i);
    }
}




    return 0;
}
