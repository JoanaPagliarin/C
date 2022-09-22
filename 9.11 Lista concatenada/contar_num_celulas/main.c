#include <stdio.h>
#include <stdlib.h>

typedef struct registro celula;
struct registro
{
    int x;
    celula *prox;
};

void insere(int n, celula *p);
void contaRecursiva(celula *p);

int main()
{
    int n1;
    celula atual;
    int tecla = 10;
    celula *pointer;
    atual.prox = NULL;

    pointer = &atual;

    while(tecla != 0)
    {
        printf("====== MENU ======\n");
        printf("1 - para inserir um número\n");
        printf("2 - para ver a quantidade de elementos\n\n");
        scanf("%d", &tecla);
        getchar();
        printf("\n");

        if(tecla == 1)
        {
            printf("Digite um numero\n");
            scanf("%d", &n1);
            getchar();
            insere(n1, &atual);
            printf("\n");
        }
        else if(tecla == 2)
        {
            contaRecursiva(&atual);
        }
    }
}

void insere(int n, celula *p)
{
    celula *nova;
    nova = (celula *) malloc(sizeof(celula));
    nova->x = n;
    nova->prox = p->prox;
    p->prox = nova;
}

void contaRecursiva(celula *p)
{
    int numCel;
   if(p != NULL)
   {
       numCel++;
       contaRecursiva(p->prox);
   }
   printf("%d celulas", numCel);
}
