#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[15], *p = &str[0];
    int tam = 0, count = 0;

    printf("String:  ");
    fflush(stdin);
    gets(str);
    tam = strlen(str);
    while (count < tam)
    {
        printf("%c", *p);
        p++;
        count++;
    }

    printf("\nNumeros de caracteres: %d", count);




    return 0;
}
