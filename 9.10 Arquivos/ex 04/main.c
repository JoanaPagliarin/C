#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

/*receber arquivo de texto e falar qntas letras sao vogais e qntas sao consoantes*/

int main()
{
    char str[TAM];
    int i = 0, vogais = 0, consoantes = 0;
    FILE *arq = fopen("arq.txt", "w");
    printf("String:   ");
    fgets(str, TAM, stdin);

    while (i < strlen(str))
    {
        fputc(str[i], arq);

        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            if(str[i] == 'A' ||
               str[i] == 'a' ||
               str[i] == 'E' ||
               str[i] == 'e' ||
               str[i] == 'I' ||
               str[i] == 'i' ||
               str[i] == 'O' ||
               str[i] == 'o' ||
               str[i] == 'U' ||
               str[i] == 'u')
                {vogais++;}

            else
            {consoantes++;}
        }

        i++;
    }

    printf("VOGAIS:   %d  ", vogais);
    printf("\nCONSOANTES:  %d  ", consoantes);

    fclose(arq);

    return 0;
}
