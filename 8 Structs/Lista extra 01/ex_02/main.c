#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas.
Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF e imprimir o seu IMC.*/

typedef struct
{
    char nome[50];
    float altura, peso;
    char cpf[14];
}pessoa;

void LePessoa (pessoa *p, int n);
int LocalizaPessoa (pessoa *p, int n);
void ImprimeIMC (pessoa *p, int n, int i);

int main()
{
    int n;
    printf("Digite a qntdde de pessoas que vai cadastrar:  ");
    scanf("%d", &n);

    pessoa a;
    pessoa *p = &a;

    LePessoa (p, n);

    while (n > 0)
    {
        int i = LocalizaPessoa(p, n);

        if ( i != 0)
        {
            ImprimeIMC(p, n, i);
            n--;
        }
    }

    return 0;
}

void LePessoa (pessoa *p, int n)
{
    int i = 0;
    while (n > 0)
    {
        printf("Nome:   ");
        fflush(stdin);
        gets((p+i) -> nome);
        printf("Peso:  ");
        scanf("%f", &(p+i) -> peso);
        printf("Altura:  ");
        scanf("%f", &(p+i) -> altura);
        printf("CPF:  ");
        fflush(stdin);
        gets((p+i) -> cpf);
        printf("\n\n");
        i++;
        n--;
    }
    system("cls");
}

int LocalizaPessoa (pessoa *p, int n)
{
    int achou = 0;
    char buscaCPF[14];
    int i = 0;

    printf("Digite um CPF para localizar a pessoa:   ");
    fflush(stdin);
    gets(buscaCPF);

    while (achou == 0 && n > 0)
    {
        if(strcmp(buscaCPF, (p+i) -> cpf) == 0)
        {
            printf("O CPF foi encontrado!\n");
            achou = 1;
            return i;
        }

        i++;
        n--;
    }

    printf("CPF invalido!\n");
    return 0;

}

void ImprimeIMC (pessoa *p, int n, int i)
{
    float IMC;

    float PESO = (p+i) -> peso;
    float ALTURA = (p+i) -> altura;
    IMC = PESO / pow(ALTURA, 2);
    printf("IMC: %.2f\n", IMC);
}
