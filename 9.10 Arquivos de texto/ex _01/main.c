#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*(a) Crie/abra um arquivo texto de nome �arq.txt�
(b) Permita que o usu�rio grave diversos caracteres nesse arquivo, at� que o usu�rio entre
com o caractere �0�
(c) Feche o arquivo
(d) Abre o arquivo e leia caracter a caracter*/

int main()
{
    int i = 0, TAM = 200;
    char str[TAM];
    FILE *arq = fopen("arq.txt", "w");

    printf("Digite um texto:  ");
    fgets(str, TAM, stdin);
    TAM = strlen(str) - 1;

    while(i < TAM && str[i] != '0')
    {
        fputc(str[i], arq);
        i++;
    }

    fclose(arq);

    fopen("arq.txt", "r");

    printf("Texto salvo em arq.txt:  ");

    while(!feof(arq))
    {
        fgets(str, TAM, arq);
        printf("%s", str);
    }

    fclose(arq);

    return 0;
}
