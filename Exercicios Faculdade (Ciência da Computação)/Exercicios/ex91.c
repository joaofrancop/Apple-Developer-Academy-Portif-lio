/*Leia do teclado valores para um vetor de 10 elementos inteiros,
  pares e positivos. Crie um segundo vetor da seguinte forma: os elementos de
  índices pares receberão os respectivos elementos divididos por 2; os
  elementos de índices ímpares receberão os respectivos elementos
  multiplicados por 3. Imprima os dois vetores*/

#include <stdio.h>

int main(void) {

  int vet[10];
  int vet2[10];
  int i;

  printf("Insira valores pares e positivos: ");
  for(i = 0; i < 10; i++) { 
    scanf("%d", &vet[i]);
    if(vet[i] % 2 != 0 || vet[i] < 0) {
      printf("Valor inválido.\n");
      i--;
    }
  }

  for(i = 0; i < 10; i++){
    if(i % 2 == 0){
      vet2[i] = vet[i] / 2;
    } else {
      vet2[i] = vet[i] * 3;
    }
  }

  printf("\n\nVetor 1:\n");
  for(i = 0; i < 10; i++){
  printf("indice %d: %d\n", i, vet[i]);
  }

  printf("\n\nVetor 2:\n");
  for(i = 0; i < 10; i++){
  printf("indice %d: %d\n", i, vet2[i]);
  }
  
  return 0;
}
