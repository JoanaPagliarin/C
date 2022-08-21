#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor;
    char pagamento;

    /*ler caracter antes de ler valor*/

    printf("escolha uma forma de pagamento \n");
    printf("digite d para dinheiro \n");
    printf("digite c para cheque \n");
    printf("digite C para a vista no cartao de credito \n");
    printf("digite 2 para fazer em duas vezes, com preço normal da etiqueta e sem juros \n");
    printf("digite J para fazer em duas vezes, com preço normal da etiqueta e mais juros de 10 pontos percentuais \n");
    scanf("%c", &pagamento);

    printf("qual o valor do produto na etiqueta?   ");
    scanf("%f", &valor);


    if ((pagamento == 'd') || (pagamento == 'c'))
    {
        printf("o valor a ser pago sera de %.2f", valor*0.9);
    }

    else if (pagamento == 'C')
    {
        printf("o valor a ser pago sera de %.2f", valor*0.85);
    }

    else if (pagamento == '2')
    {
        printf("o valor a ser pago sera de duas parcelas de %.2f", valor/2);
    }

    else
    {
        printf("o valor a ser pago sera de duas parcelas de %.2f", (valor*1.1)/2);
    }


 return 0;
}
