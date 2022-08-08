#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
    a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
    b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
    ou igual a 6.*/

    int total_alunos, a;
    int i = 0, x = 0;
    float nota_1 = 0, nota_2 = 0, media = 0, media_geral = 0, somatorio_medias = 0;


    printf("quantos alunos tem na turma?  ");
    scanf("%d", &total_alunos);
    a = total_alunos;

    for (; total_alunos > 0; total_alunos--)
    {
        i++;
        printf("\n\nqual foi a nota 1 do %do aluno?  ", i);
        scanf("%f", &nota_1);
        printf("qual foi a nota 2 do %do aluno?   ", i);
        scanf("%f", &nota_2);
        if ((media = (nota_1 + nota_2) / 2) >= 6.0)
        {
            printf("o %d aluno foi aprovado, pois obteve media igual a %.2f!", i, media);
        }

        else
        {
            printf("o %d aluno foi reprovado, pois obteve media igual a %.2f!", i, media);
        }
        somatorio_medias = somatorio_medias + media;

    }


    printf("\n\na media geral da turma foi de %.2f", somatorio_medias/a*1.0);


    return 0;
}
