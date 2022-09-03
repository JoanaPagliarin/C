#include <stdio.h>
#include <stdlib.h>
#define N 2

//Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos.
//Em seguida imprima a matrícula, o nome e a média de cada um deles.

struct Aluno
{
    char nome[50];
    int matricula;
    float nota1, nota2;
};

void LeAluno (struct Aluno Turma[], int n);
void ImprimeAluno (struct Aluno Turma[], int n);
float CalculaMedia (struct Aluno Turma[], int i);

int main()
{
    struct Aluno Turma[N];

    LeAluno (Turma, N);

    ImprimeAluno (Turma, N);

    return 0;
}

void LeAluno (struct Aluno Turma[], int n)
{
    for(int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nome:  ");
        gets(Turma[i].nome);
        fflush(stdin);

        printf("\nMatricula:  ");
        scanf("%d", &Turma[i].matricula);

        printf("\nNota 1:  ");
        scanf("%f", &Turma[i].nota1);

        printf("\nNota 2:  ");
        scanf("%f", &Turma[i].nota2);
        printf("\n\n");
    }
}

float CalculaMedia (struct Aluno Turma[], int i)
{
    return (Turma[i].nota1 + Turma[i].nota2)/2;
}

void ImprimeAluno (struct Aluno Turma[], int n)
{
    for(int i = 0; i < n; i++)
    {
      printf("Nome: %s", Turma[i].nome);
      printf("\nMatricula: %d", Turma[i].matricula);
      printf("\nNota 1: %.2f", Turma[i].nota1);
      printf("\nNota 2: %.2f", Turma[i].nota2);
      printf("\nMedia: %.2f", CalculaMedia(Turma, i));
      printf("\n\n");
    }
}
