/*Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3
  posições que contenha a soma dos valores de cada uma das linhas da matriz.
  Crie um vetor com 4 posições que contenha a multiplicação dos valores de
  cada uma das colunas da matriz. Ao final do processamento, imprima esses
  vetores*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  int matriz[3][4];
  int vetsoma[3] = {0, 0, 0};
  int vetmulti[4] = {1, 1, 1, 1};
  int l, c, i = 0;

  for(l = 0; l < 3; l++){
    for(c = 0; c < 4; c++){
      matriz[l][c] = (rand() % 9) + 1;
      printf("%3d", matriz[l][c]);
    }
    printf("\n");
  }
  for(l = 0; l < 3; l++){
    for(c = 0; c < 4; c++){
      vetsoma[i] = vetsoma[i] + matriz[l][c];
    }
    i++;
  }

  i = 0;
  
  for(c = 0; c < 4; c++){
    for(l = 0; l < 3; l++){
   vetmulti[i] = vetmulti[i] * matriz[l][c];
    }
    i++;
  }
  
  printf("\nSoma Linhas:\n");
  
  for(i = 0; i < 3;i++){
    printf("\n%3d", vetsoma[i]);
  }

  printf("\nMultiplicação Colunas:\n");
  for(i = 0; i < 4;i++){
    printf("\n%3d", vetmulti[i]);
  }

    
  return 0;
}