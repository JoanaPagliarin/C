/*
Leia uma string de até 200 caracteres e conte quantas
vogais e consoantes existem nessa string lida.
*/

#include <stdio.h>
#include <stdlib.h>


int contVogal(char str[]);
int contConso(char str[]);

int main() {
    int TAM = 200;
    char texto[TAM];

    printf("Digite sua string: ");
    gets(texto);

    printf("Consoantes: %d\n", contConso(texto));
    printf("Vogais: %d\n", contVogal(texto));

    return 0;
}


int contVogal(char str[]) {
    int vogal = 0;

    // contem o número de vogais e consoantes
    for(int i=0; i<strlen(str); i++) {

        if(toupper(str[i]) >= 'A' && toupper(str[i]) <= 'Z') {

            if( toupper(str[i]) == 'A' ||
                toupper(str[i]) == 'E' ||
                toupper(str[i]) == 'I' ||
                toupper(str[i]) == 'O' ||
                toupper(str[i]) == 'U') {

                    vogal++;
            }
        }
    }
    return vogal;
}


int contConso(char str[]) {
    int consoante = 0;

    // contem o número de vogais e consoantes
    for(int i=0; i<strlen(str); i++) {

        if(toupper(str[i]) >= 'A' && toupper(str[i]) <= 'Z') {

            if( toupper(str[i]) != 'A' &&
                toupper(str[i]) != 'E' &&
                toupper(str[i]) != 'I' &&
                toupper(str[i]) != 'O' &&
                toupper(str[i]) != 'U') {

                consoante++;
            }
        }
    }

    return consoante;
}


//fazer um codigo para contar o numero de palavras de uma string
