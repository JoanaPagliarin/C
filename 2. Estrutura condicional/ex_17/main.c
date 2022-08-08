#include <stdio.h>
#include <stdlib.h>

int main()
{
   int codigo;
   float preco;


   printf("Menu:\n");
   printf("Cachorro quente: 1\n");
   printf("Bauru: 2\n");
   printf("Misto quente: 3\n");
   printf("Hamburguer: 4\n");
   printf("Cheeseburguer: 5\n");
   printf("Refrigerante: 6\n");
   printf("Digite o numero correspondente ao item:  ");
   scanf("%d", &codigo);

   switch (codigo){
    case 1:
        printf("voce escolheu cachorro quente; o valor sera de 11 reais");
        break;
    case 2:
        printf("voce escolheu bauru; o valor sera de 8,5 reais");
        break;
    default:
        printf("outro");
   }







    return 0;
}
