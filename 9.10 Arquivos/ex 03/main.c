#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

/*receber arquivo de texto e falar quantas letras sao vogais*/

int main()
{
    char str[TAM];
    int i = 0, vogais = 0;
    FILE *arq = fopen("arq.txt", "w");
    printf("String:   ");
    fgets(str, TAM, stdin);

    while(i < strlen(str) - 1)
    {
        fputc(str[i], arq);

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
            vogais++;

        i++;
    }

    fclose(arq);

    printf("Qntdd de vogais: %d ", vogais);

    return 0;
}
