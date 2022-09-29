#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int nota;
}aluno;

void LeAluno(aluno *p, int n);
void ImprimeAluno(aluno *p, int n);

int main()
{
    int n;
    printf("qntdd de alunos:   ");
    scanf(" %d", &n);
    aluno *a = (aluno *)malloc(sizeof(aluno) * n);
    LeAluno(a, n);
    ImprimeAluno(a, n);

    return 0; 
}

void LeAluno(aluno *p, int n)
{
    int i=0;
    while(i<n)   
    {
        printf("nome:  ");
        fflush(stdin);
        gets((p+i)->nome); //não precisa de & pq string==vetor==ponteiro
        fflush(stdin);

        printf("nota:  ");
        scanf(" %d", &(p+i)->nota);
        i++;
    }
}

void ImprimeAluno(aluno *p, int n)
{
    int i=0;
    while(i<n)
    {
        printf("nome: %s\n", (p+i)->nome); // -> já acessa o conteúdo, então não precisa de *
        printf("nota: %d\n\n", (p+i)->nota);
        i++;
    }
}