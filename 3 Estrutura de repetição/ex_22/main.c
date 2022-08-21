#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*22. Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
    ultrapassar o quilômetro 4000, parando em várias cidades durante o
    a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
    b. informação da quilometragem percorrida e adicione ao valor da quilometragem total.
    c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
    d. ultrapassar os 4000 km.*/

    int km_inicial = 0, km_total = 0;


    do

    {
        printf("quantos quilometros voce percorreu ate o momento?");
        scanf("%d", &km_inicial);

        km_total += km_inicial;


    }
    while (km_total < 4000);

    printf("parabens, voce terminou ou ultrapassou a quilometragem desejada");






    return 0;
}
