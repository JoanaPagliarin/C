#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.*/

    int idade, i, num18 = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("\ndigite a %da idade:  ", i);
        scanf("%d", &idade);

        if (idade>17)
        {
            num18 = num18 + 1;
        }
    }

    printf("%d pessoas sao maiores de idade", num18);




    return 0;
}

