#include <stdio.h>
#include <stdlib.h>
#define N 2

//Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos.
//Em seguida imprima a matrícula, o nome e a média de cada um deles.

typedef struct
{
    char nome[50];
    int matricula;
    float nota1, nota2;
}aluno;

void LeAluno (aluno a, aluno *p, int n);
void ImprimeAluno (aluno a, aluno *p, int n);

int main()
{
    aluno a;
    aluno *p = &a;

    int n;
    printf("Quantos alunos voce vai cadastrar?  ");
    scanf("%d", &n);

    LeAluno (a, p, n);
    ImprimeAluno (a, p, n);

    return 0;
}

void LeAluno (aluno a, aluno *p, int n)
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

void ImprimeAluno (aluno a, aluno *p, int n)
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
