#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], *p = &str[0];
    int tam = 0;

    printf("String:  ");
    fflush(stdin);
    gets(str);
    tam = strlen(str);

     while (tam > 0)
    {
        while (*p != ' ' && tam > 0)
        {
            printf("%c", *p);
            p++;
            tam--;
        }

        if (*(p-1) != ' ')
        printf("\n");

        p++;
        tam--;
    }


    return 0;
}
