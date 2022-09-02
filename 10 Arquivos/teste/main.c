#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Escrevendo mensagem no arquivo de texto
    FILE *arq = fopen ("C:\\Users\\Biopark\\Downloads\\Joana\\Arquivo de texto\\texto.txt", "w");
    fprintf(arq, "Esse é meu primeiro texto\n");
    fclose(arq);

    //Lendo mensagem do arquivo de texto
    arq = fopen("C:\\Users\\Biopark\\Downloads\\Joana\\Arquivo de texto\\texto.txt", "r");
    char texto[200];
    fscanf(arq, "%[^\n]", texto);
    printf("Texto.txt: %s", texto);
    fclose(arq);

    //Escrevendo e lendo mais de uma linha
    FILE *arq2 = fopen ("C:\\Users\\Biopark\\Downloads\\Joana\\Arquivo de texto\\texto2.txt", "w");
    fprintf(arq2, "Estou na aula\nA aula é de algoritmos");
    printf("\n");
    fclose(arq2);

    arq2 = fopen("C:\\Users\\Biopark\\Downloads\\Joana\\Arquivo de texto\\texto2.txt", "r");
    char *fgets(char *texto2, int 200, arq2);

    while (c = getc(arq2) != EOF)
    {
        printf("Texto2.txt: %s", texto2);
    }

    fclose(arq);

    return 0;
}

