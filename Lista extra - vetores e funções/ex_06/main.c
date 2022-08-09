#include <stdio.h>

int soma1(int q, int c);
int soma2(int ra);
int i = 10; // variável global
int j = 20; // variável global

int main()
{
    int i,k,ra,p;
    p = 10;
    ra = 5;

    for(i = 0; i < 3; i++)
    {
        k = soma1(ra, p);
        ra = soma2(k);
        printf("%d, %d\n",ra, k);
    }

return 0;
}


int soma1(int q, int c)
{
    int soma = q+i+c;
    return soma;
}

int soma2(int ra)
{
    int k = j;

    ra = ra + k; // variáveis locais
    return ra;
}
