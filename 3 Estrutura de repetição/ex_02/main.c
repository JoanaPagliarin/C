#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo
usuário.*/

int primeiro_num, ultimo_num, resultado = 0;

printf("digite um limite inferior:  ");
scanf("%d", &primeiro_num);

printf("digite um limite superior:  ");
scanf("%d", &ultimo_num);

for (;primeiro_num <= ultimo_num; primeiro_num++)
{
    resultado = resultado + primeiro_num;

}

printf("resultado dos somatorios dos numeros do intervalo eh: %d", resultado);


    return 0;
}
