#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel;
    float salario;
    float horas_aula;
    int qntdd_aulas;
    float valor_hora_aula;

    printf("professor, em qual nivel voce esta, 1, 2 ou 3?  ");
    scanf("%d", &nivel);

    printf("professor, qual a quantidade de horas/aula que voce tem?  ");
    scanf("%f", &horas_aula);

    printf("professor, qual a quantidade de aulas que voce tem?  ");
    scanf("%d", &qntdd_aulas);


    if (nivel == 1)
    {

        valor_hora_aula = 12*horas_aula;

    }

    else if (nivel == 2)
    {
        valor_hora_aula = 17*horas_aula;

    }

    else
    {
        valor_hora_aula = 25*horas_aula;

    }

    salario = valor_hora_aula*qntdd_aulas*4.5;
    printf("professor, seu salario eh de %.2f", salario);

    return 0;
}
