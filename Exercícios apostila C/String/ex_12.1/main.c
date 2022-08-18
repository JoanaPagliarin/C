#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Desenvolva um programa para ler uma string de no
máximo 100 caracteres e informe o número que cada
vogal se repete nessa frase.*/


int main()
{
char str[101];
int cont_A = 0, cont_E = 0, cont_I = 0, cont_O = 0, cont_U = 0;
int tam = 0;

printf("digite uma string:  ");
fgets(str, 101, stdin);

tam = strlen(str);

for (int i = 0; i < tam - 1; i++)
{
    if(toupper(str[i]) == 'A')
    cont_A++;

    if(toupper(str[i]) == 'E')
    cont_E++;

    if(toupper(str[i]) == 'I')
    cont_I++;

    if(toupper(str[i]) == 'O')
    cont_O++;

    if(toupper(str[i]) == 'U')
    cont_U++;
}

printf("A = %d | E = %d | I = %d | O = %d | U = %d", cont_A, cont_E, cont_I, cont_O, cont_U);


    return 0;
}
