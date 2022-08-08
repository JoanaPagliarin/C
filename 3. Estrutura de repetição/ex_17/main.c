#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
    a. que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
    da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
    execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
    a 0.*/

    float kg_comida;
    float preco_kg = 23.59;
    float preco_bebida = 0;
    float total = 0;

    do
    {

        printf("qual foi o peso do seu prato?  ");
        scanf("%f", &kg_comida);

        printf("qual foi o gasto com bebida?  ");
        scanf("%f", &preco_bebida);


        total = preco_bebida + (kg_comida * 15);

        printf("o valor total gasto foi de %.2f reais\n", total);

    }
    while (total != 0);





    return 0;
}
