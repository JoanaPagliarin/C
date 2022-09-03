#include <stdio.h>
#include <stdlib.h>

int main()

{

    /*Faça um programa que imprima um menu de 3 pratos na tela e uma
    quarta opção para sair do programa. O programa deve imprimir o
    prato solicitado. O programa deve terminar quando for escolhido a
    quarta opção.*/

    int opcao, num_1 = 0, num_2 = 0, num_3 = 0;
    float total = 0;

    do {

    printf("------- MENU ------- ");
    printf("\nPrato 1: 10 reais\n");
    printf("Prato 2: 15 reais\n");
    printf("Prato 3: 20 reais\n");
    printf("Escolha uma das opcoes ou digite 4 para sair:  ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Voce escolheu a opcao 1\n");
            printf("Foi adicionado a sua conta o valor de 10 reais\n\n");
            total += 10;
            num_1++;
            break;

        case 2:
            printf("Voce escolheu a opcao 2\n");
            printf("Foi adicionado a sua conta o valor de 15 reais\n\n");
            total += 15;
            num_2++;
            break;

        case 3:
            printf("Voce escolheu a opcao 3\n");
            printf("Foi adicionado a sua conta o valor de 20 reais\n\n");
            total += 20;
            num_3++;
            break;


        case 4:
            printf("\nVoce terminou seu pedido!\n");
            total = (10 * num_1) + (15 * num_2) + (20 * num_3);
            printf("O valor da sua conta foi de %.2f reais", total);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    }while (opcao != 4);








return 0;

}
