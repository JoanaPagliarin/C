#include <stdio.h>
#include <stdlib.h>

//contar qntdd de palavras na frase

int main()
{
    char str[15], *p = &str[0];
    int tam = 0, palavra = 0, i = 0, achei = 0;

    printf("String:  ");
    fflush(stdin);
    gets(str);
    tam = strlen(str);

    while (tam > 0)
    {
        achei = 0;

        while(*p != ' ' && achei == 0)
        {
            p++;
            tam--;

            if (*p == ' ')
            {
                printf("achei um espaco");
                palavra++;
                achei = 1;
            }
        }

    }

    printf("\nNumeros de palavras: %d", palavra);







    return 0;
}
