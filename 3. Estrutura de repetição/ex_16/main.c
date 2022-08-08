#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
    a. seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
    cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
    pelas compras.*/

    float preco_sal = 5, preco_arroz = 15, preco_feijao = 10, total = 0;
    int qntdd_sal = 0, qntdd_arroz = 0, qntdd_feijao = 0;
    char resposta;
    char s;
    char n;


    printf("bem vindo! digite S para inserir um produto ou N para finalizar a operacao:   ");
    scanf("%c", &resposta);


    if (resposta == 's' || resposta == 'S')
    {
        printf("quantidade de sal:  ");
        scanf("%d",&qntdd_sal);
        qntdd_sal = qntdd_sal;

        printf("quantidade de arroz:  ");
        scanf("%d", &qntdd_arroz);
        qntdd_arroz = qntdd_arroz;

        printf("quantidade de feijao:  ");
        scanf("%d", &qntdd_feijao);
        qntdd_feijao = qntdd_feijao;

        total = preco_sal*qntdd_sal + preco_arroz*qntdd_arroz + preco_feijao*qntdd_feijao;
        printf("O total da conta foi de %.2f reais", total);
    }

    else
    {
        total = preco_sal*qntdd_sal + preco_arroz*qntdd_arroz + preco_feijao*qntdd_feijao;
        printf("O total da conta foi de %.2f reais", total);
    }








    return 0;
}
