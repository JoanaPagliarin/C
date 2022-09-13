#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    int *p;
    p = &x;

    printf("endereco de p: %d\n", &p);

    printf("endereco de x: %d\n", p);

    x = 15;
    printf("valor de x: %d\n", *p);

    *p = 30;
    printf("valor de x: %d\n", x);
    printf("valor de x: %d\n", *p);

    printf("\nSalvando o endereco da variavel e o seu conteudo direto com ponteiro\n");

    char c;
    char *pc;

    pc = &c;

    // É IGUAL A

    char *pchar;

    pchar = malloc(sizeof(char));

    printf("char:");
    scanf("%c", pchar);

    printf("char: %c", *pchar);

    free(pchar);


    printf("\nCom vetor\n");
    int *v;
    int z[5];

    v = z; //É IGUAL A // v = &z[0];

    printf("z[0]:  ");
    scanf("%d", v);
    printf("z[0] = %d", *v);

    printf("\nz[1]:  ");
    scanf("%d", v+1);
    printf("z[1] = %d", *(v+1)); //sem parentêses, acresce em uma unidade o valor de v[0]

    printf("\nz[0] + z[1] = %d", *v + *(v+1));

    printf("\n\nCom string\n");
    char *string;
    string = malloc(sizeof(char)*10);

    printf("string:");
    fflush(stdin);
    gets(string);
    printf("%s", string); //string já é um vetor, não precisa do *

    free(string);

    return 0;
}
