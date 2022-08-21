#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Uma agência espiã deseja enviar mensagens secretas para
seus agentes. O código dessas mensagens é a substituição
das vogais por números, sendo que as vogais AEIOU
correspondem a 23456. Nesse código a frase “EU ESTOU
NA AULA DE ICC” corresponde à frase: “36 3ST56 N2
26L2 DE 4CC“. Faça um programa em C que receba uma
frase e a codifique-a. A frase deve possuir no máximo 60
caracteres.*/

int main()
{
    char str[60], str2[60];
    int tam = 0;
    int i = 0;

    printf("string:  ");
    gets(str);

    tam = strlen(str);

    while (i < tam)
    {
        if (str[i] == ' ')
        str2[i] = ' ';

        if (toupper(str[i] == 'A'))
        str2[i] = '2';

        if (toupper(str[i] == 'E'))
        str2[i] = '3';

        if (toupper(str[i] == 'I'))
        str2[i] = '4';

        if (toupper(str[i] == 'O'))
        str2[i] = '5';

        if (toupper(str[i] == 'U'))
        str2[i] = '6';

        if
        (str[i] != 'A' &&
         str[i] != 'E' &&
         str[i] != 'I' &&
         str[i] != 'O' &&
         str[i] != 'U')

        {str2[i] = str[i];}

        i++;
    }

    printf("%s", str2);

    return 0;
}
