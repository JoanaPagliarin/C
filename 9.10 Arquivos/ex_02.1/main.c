#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*mesmo exercicio que o 2, s� que a entrada � do usuario*/

int main()
{
   char str[1000];
   int i = 0;

   FILE *arq = fopen("arq.txt", "w");
   printf("Digite um texto (digite 0 para finalizar):  ");

   while(i < strlen(str) && str[i] != 0)
   {
        fgets(str, strlen(str), stdin);
        fputc(str[i], arq);
        i++;
   }



    return 0;
}
