/*Escreva uma função que encontre o maior elemento em um vetor de inteiros usando ponteiros. A função deve retornar o valor do maior elemento encontrado.*/

#include <stdio.h>
#include <stdlib.h>

int maior(int *vet, int tamanho)
{
    int maiorElemento = *vet;

    for ( int i = 1; i < tamanho; i++)
    {
        if( *(vet + i) > maiorElemento)
        {
        maiorElemento = *(vet + i); // Atualiza se encontrar um maior valor
        }
    }

    return maiorElemento;
}

int main(){

    int *ponteiro;
    int tam;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    ponteiro = (int*) malloc(tam * sizeof(int));

    if (ponteiro == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for( int i = 0; i < tam; i ++)
    {
    printf("Insira um valor para %d: ", i);
    scanf("%d", (ponteiro + i));
    }

    int maiorValor = maior(ponteiro, tam);

    printf("Maior valor = %d", maiorValor);

    free(ponteiro);

    return 0;
}