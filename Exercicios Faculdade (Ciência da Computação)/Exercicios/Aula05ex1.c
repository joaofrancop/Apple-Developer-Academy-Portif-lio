/*Declare um vetor de 10 posições do tipo int, inicialize um ponteiro para a posição inicial do vetor, faça o ponteiro percorrer o vetor preenchendo estas posições com valores quaisquer lidos do teclado e depois imprima os 10 valores de trás para frentes, novamente a partir do vetor;*/

#include <stdio.h>

int main(){

    int vet[10], *ponteiro, i;

    ponteiro = vet;

    for( i = 0; i < 10; i ++)
    {
        printf("\nInsira o valor da posição %d: ", i);
        scanf("%d", (ponteiro + i));
    }

    for( i = 9; i >= 0; i --)
    {
        printf("\nO valor da posição %d = %d", i, *(ponteiro + i));
    }

    return 0;
}