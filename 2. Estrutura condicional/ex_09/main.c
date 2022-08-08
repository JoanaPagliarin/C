#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char id_aluno [10]; /* dava p ter usado int*/
    float nota_1, nota_2, nota_3;
    float media;

    printf("digite o seu numero de identificação  ");
    scanf("%s", id_aluno);

    printf("digite a sua primeira nota:  ");
    scanf("%f", &nota_1);

    printf("digite a sua segunda nota:  ");
    scanf("%f", &nota_2);

    printf("digite a sua terceira nota:  ");
    scanf("%f", &nota_3);

    media = (nota_1 + nota_2 + nota_3)/3;


    if (media < 4)
    {
        printf("a sua media foi de %.2f \n", media);
        printf("aluno de identificação %s, voce foi reprovado", id_aluno);
    }

    else if ( 4 <= media < 7)
    {
        printf("a sua media foi de %.2f \n", media);
        printf("aluno de identificação %s, voce ficou em recuperação", id_aluno);
    }

    else
    {
        printf("a sua media foi de %.2f \n", media);
        printf("aluno de identificação %s, voce foi aprovado", id_aluno);
    }




    return 0;
}
