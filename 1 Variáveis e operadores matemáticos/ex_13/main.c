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

    printf("digite um n�mero de at� 3 d�gitos  ");
    scanf("%d", &numero);

    centena = numero/100;
    dezena = (numero - centena*100)/10;
    unidade = numero - (centena*100 + dezena*10);


    printf("a centena desse n�mero � %d, a dezena � %d e a unidade � %d", centena, dezena, unidade); */


int centena;
int dezena;
int unidade;

printf("digite um n�mero de at� 3 d�gitos  ");
scanf("%1d", &centena);
scanf("%1d", &dezena);
scanf("%1d", &unidade);

printf("a centena desse n�mero � %d, a dezena � %d e a unidade � %d", centena, dezena, unidade);

    return 0;
}

