#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

/*  int numero;
    int centena;
    int dezena;
    int unidade;

    printf("digite um número de até 3 dígitos  ");
    scanf("%d", &numero);

    centena = numero/100;
    dezena = (numero - centena*100)/10;
    unidade = numero - (centena*100 + dezena*10);


    printf("a centena desse número é %d, a dezena é %d e a unidade é %d", centena, dezena, unidade); */


int centena;
int dezena;
int unidade;

printf("digite um número de até 3 dígitos  ");
scanf("%1d", &centena);
scanf("%1d", &dezena);
scanf("%1d", &unidade);

printf("a centena desse número é %d, a dezena é %d e a unidade é %d", centena, dezena, unidade);

    return 0;
}

