#include <stdio.h>
#include <stdlib.h>

int i = 0, j = 0, r = 0, k = 0, p = 0;
int v[11], v_repetidos[11], v_num_repeticoes[11], v_posicoes[11];
int contador = 0, indica_repetidos = 0;
int main()
{
    for(i = 0; i < 10; i++)
    {v_num_repeticoes[i] = 1;}

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++)
    {
        printf("posicao i[%d] =  ", i);
        scanf("%d", &v[i]);
        printf("\n");
        indica_repetidos = 0; j = 0;

        for (j = 0; j < i && i != 0; j++)
        {
            if(v[i] == v[j])
            {
                k = 0;
                while (k < r - 1)
                {
                    if(v[i] == v_repetidos[k] && indica_repetidos == 0)
                    {
                        v_num_repeticoes[k] += 1;
                        indica_repetidos = 1;
                        v_posicoes[p] = i;
                        printf("%d repete quando v_posicoes[%d] = i = %d\n\n", v[i], p, i);
                        p++;
                    }
                    k++;
                }

                if(indica_repetidos == 0)
                {
                    v_repetidos[r] = v[i];
                    v_num_repeticoes[r] += 1;
                    v_posicoes[p] = j;
                    printf("%d repete quando v_posicoes[%d] = j = %d\n", v[i], p, j);
                    p++;
                    v_posicoes[p] = i;
                    printf("%d repete quando v_posicoes[%d] = i = %d\n\n", v[i], p, i);
                    p++;
                    r++;
                    contador++;
                    break;
                }
            }
        }

    }

    printf("\nNumeros repetidos:  ");
    for(r = 0; r < contador; r++)
    {printf("Numero %d repetiu %d vezes   ", v_repetidos[r], v_num_repeticoes[r]);}


    return 0;
}

