#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

//Escrever um programa que cadastre o nome, a matr�cula e duas notas de v�rios alunos.
//Em seguida imprima a matr�cula, o nome e a m�dia de cada um deles.

typedef struct
{
    char nome[50];
    int matricula;
    float nota1, nota2;
}aluno;

void LeAluno (aluno *p, int n);
void ImprimeAluno (aluno *p, int n);

int main()
{
    aluno a;
    aluno *p = &a;

    int n;
    printf("Quantos alunos voce vai cadastrar?  ");
    scanf("%d", &n);

    LeAluno (p, n);
    ImprimeAluno (p, n);

    return 0;
}

void LeAluno (aluno *p, int n)
{
    while (n > 0)
    {
        printf("Nome:  ");
        fflush(stdin);
        gets(p -> nome);

        printf("\nMatricula:  ");
        scanf("%d", &p -> matricula);

        printf("\nNota 1:  ");
        scanf("%f", &p -> nota1);

        printf("\nNota 2:  ");
        scanf("%f", &p -> nota2);
        printf("\n\n");
        p++;
        n--;
    }
}

void ImprimeAluno (aluno *p, int n)
{
    while (n > 0)
    {
      printf("Nome: %s", p -> nome);
      printf("\nMatricula: %d", p -> matricula);
      printf("\nNota 1: %.2f", p -> nota1);
      printf("\nNota 2: %.2f", p -> nota2);
      printf("\nMedia: %.2f", (p -> nota1 + p -> nota2)/2);
      printf("\n\n");
      n--;
      p++;
    }
}
