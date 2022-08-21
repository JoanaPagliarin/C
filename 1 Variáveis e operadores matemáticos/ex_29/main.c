#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float preco;

    printf("qual o preco original do produto?  ");
    scanf("%f", &preco);


    printf("o preco final do produto é de %.2f reais", preco*0.9);


    return 0;
}
