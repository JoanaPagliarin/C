#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

/*Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas.
Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF e imprimir o seu IMC.*/

struct Pessoa
{
    char nome[50];
    float altura, peso;
    char cpf[14];
};

void LePessoa (struct Pessoa pessoas[], int n);
int LocalizaPessoa (struct Pessoa pessoas[], int n);
float ImprimeIMC(struct Pessoa pessoas[], int n);

int main()
{
    struct Pessoa pessoas[N];
    LePessoa (pessoas, N);
    printf("\nO IMC da pessoa localizada eh %.2f", ImprimeIMC(pessoas, N));

    return 0;
}

void LePessoa (struct Pessoa pessoas[], int n)
{
    for(int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nome:   ");
        gets(pessoas[i].nome);

        fflush(stdin);
        printf("Peso:  ");
        scanf("%f", &pessoas[i].peso);

        fflush(stdin);
        printf("Altura:  ");
        scanf("%f", &pessoas[i].altura);

        fflush(stdin);
        printf("CPF:  ");
        gets(pessoas[i].cpf);
        printf("\n\n");
    }
}

int LocalizaPessoa (struct Pessoa pessoas[], int n)
{
    int achou = 0;
    char buscaCPF[14];

    while (achou == 0)
    {
        fflush(stdin);
        printf("Digite um CPF para localizar a pessoa:   ");
        gets(buscaCPF);

        for(int i = 0; i < n && achou == 0; i++)
       {
            if(strcmp(buscaCPF, pessoas[i].cpf) == 0)
            {
                printf("O CPF foi encontrado!\n");
                achou = 1;
                return i;
            }
        }
            printf("CPF invalido!\n");
    }
}

float ImprimeIMC(struct Pessoa pessoas[], int n)
{
    float imc;
    int i;

        i = LocalizaPessoa(pessoas, n);
        imc = ((pessoas[i].peso)/pow((pessoas[i].altura), 2));
        return imc;
}
