#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int valor; 
    int num_vezes_repete;
    int *posicao_repete;
}numero;

void lerVetor(numero *n); 
void imprimeVetor(numero *n);
void verificaNumRepetidos(numero *n);

void main()
{   
    numero *n = malloc(sizeof(numero)*10); 
    lerVetor(n);
    printf("Vetor: "); imprimeVetor(n);
    // printf("Numeros repetidos:  "); verificaNumRepetidos(n);
    free(n);  
}

void lerVetor(numero *n)
{
    for(int i=0; i<10; i++)
    {
        printf("elemento %d: ", i+1);
        scanf("%d", &((n+i) -> valor));
        *posicao_repete = n+i;  
    }
}

void imprimeVetor(numero *n)
{
    for(int i=0; i<10; i++)
    {
        printf("%d  ", (n+i) -> valor); 
    }                            
}


// void verificaNumRepetidos(numero *n )
// {
//     int i, j, aux, repetiu = 0; 

//     for(j=0; j<10; j++)
//     {
//         for(i=0; i<j; i++)
//         {
//             if(*(p+i) == *(p+j))
//             {
//                 printf()
//             }
//         }
//     }
// }