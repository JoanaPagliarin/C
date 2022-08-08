#include <stdio.h>
#include <stdlib.h>

int main()
{
// area do losango

float diagonal_maior, diagonal_menor;

printf("qual é a medida da diagonal maior?  ");
scanf("%f", &diagonal_maior);


printf("qual eh a medida da diagonal menor?  ");
scanf("%f", &diagonal_menor);

printf("a area do losango eh de %.2f unidades de medida", (diagonal_maior*diagonal_menor/2));



    return 0;
}
