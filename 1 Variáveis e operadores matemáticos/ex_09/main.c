#include <stdio.h>
#include <stdlib.h>

int main()
{

int preco_pequeno, preco_medio, preco_grande;
int camiseta_pequena, camiseta_media, camiseta_grande;

preco_pequeno = 10;
preco_medio = 12;
preco_grande = 15;

    printf("quantas camisetas pequenas voce deseja comprar?  ");
    scanf("%d", &camiseta_pequena);

    printf("quantas camisetas medias voce deseja comprar?  ");
    scanf("%d", &camiseta_media);

    printf("quantas camisetas grandes voce deseja comprar?  ");
    scanf("%d", &camiseta_grande);

    printf("o valor a ser pago eh %d reais",(camiseta_pequena*preco_pequeno) + (camiseta_media*preco_medio) + (preco_grande*camiseta_grande));


    return 0;
}
