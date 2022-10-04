#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome [50];
    float nota1;
    float nota2;
}aluno;

void leAluno(aluno *a, int n);
void imprimeAluno(aluno *a, int n);
void armazenaNotas(aluno *a, float **v, int n);
//ponteiro de um ponteiro aponta para o endereço de memória de outro ponteiro; isso é útil porque, se pedirmos como parâmetro apenas *v, e passássemos, na main, apenas v, eu iria pegar o endereço de memória da primeira "casinha" do vetor v e, ao pedirmos como parâmetro **v e passarmos, na main, &v, estamos passando o endereço de memória do próprio vetor, que é um ponteiro. E, por exemplo, para darmos malloc FORA da main em um ponteiro, precisamos passar o endereço do ponteiro. Como vetor já é um ponteiro, precisamos passar o ponteiro do ponteiro. 

int main()
{
    int n; 
    printf("Quantos alunos voce quer cadastrar?  ");
    scanf("%d", &n);
    aluno *a = (aluno *)malloc(sizeof(aluno)*n); 
    leAluno(a, n); 
    imprimeAluno(a, n); 
    
    float **v; 
    armazenaNotas(a, v, n); 

    return 0; 
}

void leAluno(aluno *a, int n)
{
    int i=0;
    while(i<n)
    {
        printf("nome: ");
        fflush(stdin);
        gets((a+i)->nome); 
        // string já é um vetor e não precisa de &
        printf("nota1: ");
        scanf("%f", &(a+i)->nota1);
        printf("nota2: ");
        scanf("%f", &(a+i)->nota2);
        i++;
    }
}

void imprimeAluno(aluno *a, int n)
{
    int i=0;
    while(i<n)
    {
        printf("nome: %s\n", (a+i)->nome);
        printf("nota1: %.2f\n", (a+i)->nota1);
        printf("nota2: %.2f\n\n", (a+i)->nota2);
        // lembrar que ponteiro->valor, com a seta, o valor já é acessado, por isso " *ponteiro->valor " é inválido; no entanto, "*ponteiro.valor" é válido, pois estamos imprimindo o conteúdo cujo endereço de ponteiro aponta
        i++;
    }
}

void armazenaNotas(aluno *a, float **v, int n)
{
    int i=0;
    int h=0;
    v = (float **)malloc(sizeof(float *)*n);
    // isso é igual a float **v = malloc...

    for(; i<n; i++)
    {
        v[i] = (float *)malloc(sizeof(float)*2);
        v[i][0] = (a+i)->nota1;
        v[i][1] = (a+i)->nota2;
        printf("%.2f %.2f\n", v[i][0], v[i][1]); 
    }
}
