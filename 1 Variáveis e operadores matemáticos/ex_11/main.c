#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias; //sem acidentes

    //1 mes = 30 dias

    int meses; //sem acidentes
    int anos; //sem acidentes

    printf("quantos dias sem acidentes?  ");
    scanf("%d", &dias);

    anos = dias/365;

    meses = dias/30;

    dias = dias - meses*30;

    printf("estamos ha %d anos, %d meses e %d dias sem acidentes", anos, meses, dias);

    return 0;
}
