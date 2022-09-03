#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, fat;

    printf("digite um numero para exibir a o seu fatorial:  ");
    scanf("%d", &n);

    for (fat = 1; n>1; n = n - 1)
    {
        fat = fat*n;
    }

 printf("\n%d", fat);



    /* se n = 5;


    5*4*3*2*1  =  n * (n-1) * (n-2) ......



    */




    return 0;
}
