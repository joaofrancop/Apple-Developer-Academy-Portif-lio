/*Mude o programa anterior, escrevendo funções separadas para: (a) alocar o vetor e preenchê-lo com zeros; (b) preencher o vetor; e (c) imprimir o vetor.*/

#include <stdio.h>
#include <stdlib.h>

void zeros(int **vet, int tam)
{
    *vet = (int*) malloc(tam * sizeof(int));
    
    for(int i = 0; i < tam; i++)
    {
       (*vet)[i] = 0; 
    }
}

void cem(int *vet, int tam)
{
    for(int i = 0; i < tam; i++)
    {
       vet[i] = 100*i; 
    }    
}

void imprimir(int *vet, int tam)
{
    for(int i = 0; i < tam; i++)
    {
       printf("\nvet[%d] = %d", i, vet[i]);
    }       
}

int main()
{
    int tamanho, i;
    int *vet = NULL;

    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for(i = 0; i < tamanho; i++)
    {
       printf("\nvet[%d] = %d", i, vet + i);
    }   

    zeros(&vet, tamanho);

    printf("\n\n");

    for(i = 0; i < tamanho; i++)
    {
       printf("\nvet[%d] = %d", i, vet[i]);
    }   

    cem(vet, tamanho);

    printf("\n\n");

    for(i = 0; i < tamanho; i++)
    {
       printf("\nvet[%d] = %d", i, vet[i]);
    }   

    printf("\n\n");

    imprimir(vet, tamanho);

        for(i = 0; i < tamanho; i++)
    {
       printf("\nvet[%d] = %d", i, vet[i]);
    }  
free(vet);

    return 0;
}