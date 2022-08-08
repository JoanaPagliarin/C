#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez está sendo escrita:
“Esta é a mensagem 1”, “Esta é a mensagem 2” ... “Esta é a mensagem 20”*/


char texto [50];

printf("digite uma mensagem para ser exibida na tela:  ");
scanf("%s", texto);


for (int i = 1; i <= 20; i++)
{
    printf("Essa eh a mensagem %d: %s\n",i, texto);
}








    return 0;
}
