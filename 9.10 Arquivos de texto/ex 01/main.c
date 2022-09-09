#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre
com o caractere ‘0’
(c) Feche o arquivo
(d) Abre o arquivo e leia caracter a caracter*/

int main()
{
    int i = 0;
    char str[20];
    FILE *arq = fopen("arq.txt", "w");

    printf("Digite um texto:  ");
    fgets(str, 20, stdin);

    while(i < 20 && str[i] != '0')
    {
        fputc(str[i], arq);
        i++;
    }

    fclose(arq);

    fopen("arq.txt", "r");

    printf("Texto salvo em arq.txt:  ");

    while(!feof(arq))
    {
        fgets(str, 20, arq);
        printf("%s", str);
    }

    fclose(arq);

    return 0;
}
