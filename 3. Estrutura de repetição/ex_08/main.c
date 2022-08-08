#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.*/

    int idade = 0, i, idade_2 = 0;
    char nome [50], nome_0 [50];

    for (i = 1; i <= 10; i++)
    {
        printf("\ndigite a %da idade:  ", i);
        scanf("%d", &idade);

        printf("\ndigite o nome da %da pessoa:  ", i);
        scanf("%s", nome);

        if (idade < idade_2 || idade_2 == 0)
        {
            idade_2 = idade;
            strcpy(nome_0, nome);
        }

    }


    printf("a idade mais nova corresponde a %d anos e ela se chama %s", idade_2, nome_0);


    /* for (i = 1; i <= 3; i++)
     {
         printf("\ndigite a %da idade:  ", i);
         scanf("%d", &idade);



         if ((idade < idade_2) ||(idade_2 == 0))
         {
             idade = idade + idade_2;
             idade_2 = idade - idade_2;
             idade = idade - idade_2;
         }
     }

     printf("a pessoa mais nova tem %d anos", idade_2);*/







    return 0;
}
