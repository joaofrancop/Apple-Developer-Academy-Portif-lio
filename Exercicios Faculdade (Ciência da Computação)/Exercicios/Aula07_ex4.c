/*Escreva um programa que aloque dinamicamente um vetor ''v'' e o preencha com ''v[i] = 100*i'', sendo que o número de elementos do vetor é lido do teclado. A área de memória alocada deve ser definida em função do tamanho do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vet = (int*) malloc(tamanho * sizeof(int));

for ( i = 0; i < tamanho; i++)
{
    vet[i] = 100*i;
}

for ( i = 0; i < tamanho; i++)
{
    printf("\nvet[%d] = %d", i, *(vet + i));
}

free(vet);

    return 0;
}