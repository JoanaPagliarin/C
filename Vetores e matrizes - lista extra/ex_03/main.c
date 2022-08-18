#include <stdio.h>
#include <stdlib.h>

/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.
*/

int main()
{
    int v[11];
    int i = 0;
    int v_2[11];

    while (i < 10)
    {
        printf("digite o %d valor:  ", i+1);
        scanf("%d", &v[i]);
        i++;
    }

    i = 0;

    while (i < 10)
    {
       v_2[i] = pow(v[i], 2);
       i++;
    }


    i = 0;

    while (i < 10)
    {
        printf("%d  ", v_2[i]);
        i++;
    }

    return 0;
}
