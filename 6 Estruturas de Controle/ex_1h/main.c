#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//converter um numero da base 10 para alguma outra base

int resto[];

int main()
{
int n, numero, i = 0, base;

printf("n:  ");
scanf("%d", &n);

printf("base para conversao:  ");
scanf("%d", &base);

numero = n;

while(n >= base)
{
    resto[i] = n%base;

    if ((n <= base) || (n/base < base))
    {
        n = n/base;
        i++;
        resto[i] = n;
    }

    else
    {
        n = n/base;
        i++;
    }

}

printf("%d na base %d eh igual a:  ", numero, base);

while(i >= 0)
{
    printf("%d  ", resto[i]);
    i--;
}

return 0;

}
