/*Faca um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são ímpares;*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i, contPar = 0, contImpar = 0;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vet = (int*) malloc(tamanho * sizeof(int));

    for( i = 0; i < tamanho; i++)
    {
        printf("Insira um valor para posição [%d]: ", i);
        scanf("%d", vet + i);
    }

        for( i = 0; i < tamanho; i++)
    {
        if(vet[i] % 2 == 0){
            contPar++;
            printf("\nvet[%d] = %d é par (%d pares)", i, *(vet + i), contPar);
        } else {
            contImpar++;
            printf("\nvet[%d] = %d é ímpar (%d ímpares)", i, *(vet + i), contImpar);
        }
    }

    printf("\n\nFinal:\nPares: %d\nÍmpares: %d", contPar, contImpar);

    free(vet);

    return 0;
}