/*Faça um programa C que usa a aritmética de ponteiros para acessar os elementos de um vetor de inteiros. Você deverá usar a aritmética de ponteiros tanto na atribuição de valores aos elementos do vetor quando na leitura dos valores armazenados nos elementos.*/

#include <stdio.h>

int main(){

    int vetor[4];
    int *ponteiro;
    ponteiro = vetor;

    for(int i = 0; i < 4; i++){
        *(ponteiro + i) = i * 15;
    }

    for(int i = 0; i < 4; i++){
        printf("Elemento %d do vetor = %d\n" , i, *(ponteiro + i));
    }

    return 0;
}