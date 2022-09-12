#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y=20;
    int* p1;
    int* p2;
    p1 = &x;
    p2 = &y;
    (*p1)++;
    //A)
    printf("O valor de X:%d\n",x);
    //B)
    printf("O valor de Y: %d\n",y);
    //C)
    printf("O valor de &X:%d\n",&x);
    //D)
    printf("O valor de &Y:%d\n",&y);
    //E)
    printf("O valor de P1: %d\n",p1);
    //F)
    printf("O valor de P2: %d\n",p2);
    //G)
    printf("O valor de *p1+*p2: %d\n",*p1+*p2);
    //H)
    printf("O valor de *(&x):%d\n",*(&x));
    //I)
    printf("O valor de &(*p2): %d\n",&(*p2));

    printf("O valor CONTEUDO de P1: %d\n",*p1);
    printf("O valor CONTEUDO de P2: %d\n",*p2);


    return 0;
}
