/*Escreva um programa que peça ao usuário para especificar o tamanho de um vetor de inteiros e, em seguida, aloque dinamicamente memória para esse vetor. Preencha o vetor com números aleatórios e, em seguida, imprima os valores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho, i;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vet = (int*) malloc(tamanho * sizeof(int));

    for( i = 0; i < tamanho; i ++)
    {
        printf("Insira valor para posição %d do vetor: ", i);
        scanf("%d", (vet + i));
    }

    for( i = 0; i < tamanho; i ++)
    {
        printf("\nVet[%d] -> valor = %d", i, *(vet + i));
    }

    free(vet);

    return 0;
}