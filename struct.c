#include <stdio.h>
#include <string.h>


#define TAM 50

struct tipo_pessoa
{
    int edade;
    float peso;
    char nome[TAM];

};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    tipo_pessoa pessoa = {0, 0.0, "Alex"};

    printf("alex.edade: %d\n ", pessoa.edade);
    printf("alex.peso: %.2f\n ", pessoa.peso);
    printf("alex.nome: %s\n ", pessoa.nome);
    
    printf("\nInssert your age:\n");
    scanf("%d",&pessoa.edade);
    printf("\nInssert your weight:\n");
    scanf("%f",&pessoa.peso);
    fflush(stdin);
    printf("\nInssert your name:\n");
    scanf("%s",&pessoa.nome);
    fflush(stdin);

    printf("\nAgora, a pessoa tem essos dados:\n");
    printf("Edade: %d\n", pessoa.edade);
    printf("Peso: %.2f\n", pessoa.peso);
    printf("Nome: %s\n", pessoa.nome);

}

