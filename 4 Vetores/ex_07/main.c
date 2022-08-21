#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
    R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.*/


    /*int vet_R [5], vet_S [10], vet_X [100];

    printf("Digite os 5 primeiros numeros do Vetor R:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet_R[i-1]);
    }

    printf("Vetor R = { ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", vet_R[i]);
    }

    printf("%d", vet_R[4]);
    printf(" }");
    printf("\n\n");

    //-------------------------------------

    printf("Digite os 10 primeiros numeros do Vetor S:\n");

    for (int i = 1; i < 11; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet_S[i-1]);
    }

    printf("Vetor S = { ");

    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", vet_S[i]);
    }

    printf("%d", vet_S[9]);
    printf(" }");
    printf("\n\n");

    //--------------------------
    //ENCONTRANDO ELEMENTOS EM COMUM

    int m = 0; //variável para salvar os números em comum no vet_X

    for (int j = 0; j <= 4; j++) //percorre os elementos do vet_R que tem 5 números
    {
        for (int k = 0; k <= 9; k++) //percorre os elementos do vet_S que tem 10 números
        {
            if (vet_S[k] == vet_R[j])
                {
                    vet_X[m++] = vet_S[k];
                }
        }

    }

    printf("Os elementos em comum dos vetores S e R geram o Vetor X.\n");

    printf("Vetor X = { ");

    for (int i = 0; i <= m-2; i++)
    {
        printf("%d, ", vet_X[i]);
    }

    printf("%d }", vet_X[m-1]);


    */

    //-------------------------------------------------

    //DESCONSIDERANDO OS REPETIDOS

    int vet_R [5], vet_S [10], vet_X [100];

    printf("Digite os 5 primeiros numeros do Vetor R:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet_R[i-1]);
    }

    printf("Vetor R = { ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", vet_R[i]);
    }

    printf("%d", vet_R[4]);
    printf(" }");
    printf("\n\n");

//-------------------------------------

    printf("Digite os 10 primeiros numeros do Vetor S:\n");

    for (int i = 1; i < 11; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet_S[i-1]);
    }

    printf("Vetor S = { ");

    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", vet_S[i]);
    }

    printf("%d", vet_S[9]);
    printf(" }");
    printf("\n\n");

//--------------------------
//ENCONTRANDO ELEMENTOS EM COMUM

    int m = 0; //variável para salvar os números em comum no vet_X

    int n = 0; //percorre vet_X

    int elemento_existe = 0;

    for (int j = 0; j <= 4; j++) //percorre os elementos do vet_R que tem 5 números
    {
        for (int k = 0; k <= 9; k++) //percorre os elementos do vet_S que tem 10 números
        {
            if (vet_S[k] == vet_R[j])
            {
                elemento_existe = 0;

                for (n = 0; n <= m-1; n++)
                {
                    if (vet_S[k] == vet_X[n])
                    {
                        elemento_existe = 1; // VERDADEIRO; Elemento existe
                    }
                }

                if (elemento_existe == 0) // FALSO; Elemento nao existe
                {
                    vet_X[m++] = vet_S[k];
                }
            }
        }

    }

    printf("Os elementos em comum dos vetores S e R geram o Vetor X.\n");

    printf("Vetor X = { ");

    for (int i = 0; i <= m-2; i++)
    {
        printf("%d, ", vet_X[i]);
    }

    printf("%d }", vet_X[m-1]);














    return 0;
}
