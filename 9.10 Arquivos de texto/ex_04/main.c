#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*receber arquivo de texto e falar qntas letras sao vogais e qntas sao consoantes*/

int main()
{
    int i = 0, TAM = 200, vogais = 0, consoantes = 0;
    char str[TAM];
    FILE *arq = fopen("arq.txt", "w");
    printf("String:   ");
    fgets(str, TAM, stdin);
    TAM = strlen(str) - 1;

    while (i < TAM)
    {
        fputc(str[i], arq);

        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            if(toupper(str[i]) == 'A' ||
               toupper(str[i]) == 'E' ||
               toupper(str[i]) == 'I' ||
               toupper(str[i]) == 'O' ||
               toupper(str[i]) == 'U')
                {vogais++;}

            else
            {consoantes++;}
        }9

        i++;
    }

    printf("VOGAIS:   %d  ", vogais);
    printf("\nCONSOANTES:  %d  ", consoantes);

    fclose(arq);

    return 0;
}
