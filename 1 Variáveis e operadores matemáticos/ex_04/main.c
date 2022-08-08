#include <stdio.h>
#include <stdlib.h>

int main()
{
 int idade;
 char nome[50];


 printf("qual eh o seu nome?  ");
 scanf("%s", nome);

 printf("qual sua idade?  ");
 scanf ("%d", &idade);

 printf("Vc ja viveu %d dias, %s", idade*365, nome);

    return 0;
}
