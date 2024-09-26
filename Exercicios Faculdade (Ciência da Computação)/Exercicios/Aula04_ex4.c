/*Crie um programa que contenha um array de inteiros contendo cinco elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido;*/

#include <stdio.h>

int main(){

    int vet[5];
    int *ponteiro;
    int i;
    ponteiro = vet;

    for(i = 0; i < 5; i++){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Elemento %d do vetor = %d\n" , i, 2*(*(ponteiro + i)));        
    }

    return 0;
}