/*15. Faça um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:
    1. Faça um loop e verifique se o vetor contem realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
    2. Atribua para cada elemento do vetor o valor do seu índice junto a este vetor.
    3. Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet = (int*) calloc(1500, sizeof(int));
    int i, soma = 0;

    for(i = 0; i < 1500; i++)
    {
        printf("\nvet[%d] = %d", i, vet[i]);
        soma = soma + vet[i];
    }

        printf("\nSoma = %d", soma);

        for(i = 0; i < 1500; i++)
    {
        vet[i] = i;
        printf("\nvet[%d] = %d", i, vet[i]);
    }

        for(i = 0; i < 10; i++)
    {
        printf("\nvet[%d] = %d", i, vet[i]);
    }

        for(i = 1490; i < 1500; i++)
    {
        printf("\nvet[%d] = %d", i, vet[i]);
    }

    return 0;
}