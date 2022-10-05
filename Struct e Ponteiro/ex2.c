#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

void recebeData(data *d, int n);
void ordenaData(data *d, int n);
void imprimeData(data *d, int n);

void main()
{
    int n;
    printf("Quantos compromissos voce vai cadastrar?  ");
    scanf("%d", &n);
    data *d = (data *)malloc(sizeof(data) * n);
    recebeData(d, n);
    ordenaData(d, n);
}

void recebeData(data *d, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("Dia:  ");
        scanf("%d", &(d + i)->dia);
        printf("Mes:  ");
        scanf("%d", &(d + i)->mes);
        printf("Ano:  ");
        scanf("%d", &(d + i)->ano);
        i++;
        printf("\n");
    }
    printf("\n");
}

void imprimeData(data *d, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("Compromisso %d: %d/%d/%d\n", i + 1, (d + i)->dia, (d + i)->mes, (d + i)->ano);
        i++;
        printf("\n");
    }
    printf("\n");
}

void ordenaData(data *d, int n)
{
    data *aux = (data *)malloc(sizeof(data)*n);
    int i, j;
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            // ANOS E MESES IGUAIS, CONSIDERA-SE APENAS O DIA COMO CRITÉRIO
            if (d[i].ano == d[i+1].ano && d[i].mes == d[i+1].mes)
            {
                    if (d[i].dia > d[i+1].dia)
                    {
                        aux[i]= d[i]; 
                        d[i] = d[i+1]; 
                        d[i+1] = aux[i];
                    }
            }  

            // APENAS ANOS IGUAIS, CONSIDERA-SE MESES E DIAS
            else if (d[i].ano == d[i+1].ano && d[i].mes > d[i+1].mes)
            {
               
                        aux[i]= d[i]; 
                        d[i] = d[i+1]; 
                        d[i+1] = aux[i];

                        if (d[i].dia > d[i+1].dia)
                        {
                            aux[i]= d[i]; 
                            d[i] = d[i+1]; 
                            d[i+1] = aux[i];
                                imprimeData(d, n);

                        }
                    }
                        imprimeData(d, n);

            }

            // APENAS MESES IGUAIS, CONSIDERA-SE APENAS DIAS
            else if (d[i].mes == d[i+1].mes)
            {
                if (d[i].dia > d[i+1].dia)
                {
                    aux[i]= d[i]; 
                    d[i] = d[i+1]; 
                    d[i+1] = aux[i];
                        imprimeData(d, n);

                }
                    imprimeData(d, n);

            }   
        }
    }
    imprimeData(d, n);
}