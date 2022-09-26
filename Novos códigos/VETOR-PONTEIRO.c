#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *p); //PONTEIRO SEMPRE ESPERA RECEBER UM ENDEREÇO DE MEMÓRIA 
void imprimeVetor(int *p);
void ordenaVetor(int *p); 

void main()
{   
    int *v = malloc(sizeof(int)*5); //ALOCANDO 20 BYTES
    lerVetor(v); //NÃO PRECISO PASSAR O ENDEREÇO PORQUE O VETOR JÁ É UM PONTEIRO 
    printf("Vetor: "); imprimeVetor(v);
    printf("Vetor ordenado: ");ordenaVetor(v); 
    free(v); 
}

void lerVetor(int *p)
{
    for(int i=0; i<5; i++)
    {
        printf("elemento %d: ", i+1);
        scanf("%d", p+i); //SALVANDO NA CAIXA DO PONTEIRO "P" O ENDEREÇO DE MEMÓRIA DO VALOR DIGITADO; O "i" AVANÇA AS CAIXAS
                        //DE P SEM ALTERAR O ENDEREÇO DE V
    }
}

void imprimeVetor(int *p)
{
    for(int i=0; i<5; i++)
    {
        printf("%d  ", *(p+i)); //ACESSA O CONTEÚDO DO ENDEREÇO CORRESPONDENTE; VAI ATÉ O ENDEREÇO QUE ESTÁ ARMAZENADO NAS
    }                           //CAIXAS DE "P", VÊ O QUE TEM LÁ E IMPRIME 
}

void ordenaVetor(int *p)
{
    int i, j, aux; 

    for(j=0; j<4; j++)
    {
        for(i=0; i<4; i++)
        {
            if(*(p+i) > *(p+i+1))
            {
                aux = *(p+i);
                *(p+i) = *(p+i+1);
                *(p+i+1) = aux; 
            }
        }
    }
   imprimeVetor(p); 
}

