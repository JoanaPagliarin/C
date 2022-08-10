#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet[] = {5,3,2,1,90,6};
    int tam = sizeof(vet)/sizeof(int);
    int min, aux;

    for(int inicio=0; inicio<tam; inicio++){

        // encontra o índice do menor valor a partir
        // da posição inicio
        min = inicio;
        for(int j=inicio+1; j<tam; j++){
            if(vet[min] > vet[j]) {
                min = j;
            }
        }

        // faz a troca entre a posicão inicio e a posição do mínimo
        aux = vet[inicio];
        vet[inicio] = vet[min];
        vet[min] = aux;
    }

    // imprime vetor ordenado
    for(int i=0;i<tam;i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}
