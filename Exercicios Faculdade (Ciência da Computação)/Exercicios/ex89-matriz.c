/*Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha a soma
dos valores de cada uma das linhas da matriz. Crie um vetor com 4 posições que contenha a
multiplicação dos valores de cada uma das colunas da matriz. Ao final do processamento, imprima
esses vetores.*/

#include <stdio.h>

int main() {

  int matriz[3][4];
  int vetsoma[3] = {0, 0, 0};
  int vetmulti[4] = {1, 1, 1, 1};
  int l, c;

  for(l = 0; l < 3; l++){
    for(c = 0; c < 4; c++){
      printf("Linha %d Coluna %d: ", l, c);
      scanf("%d", &matriz[l][c]);
    }
    printf("\n");
  }

  for(l = 0; l < 3; l++){
    for(c = 0; c < 4; c++){
      printf("%2d ", matriz[l][c]);
    }
    printf("\n");
  }

  for(l = 0; l < 3; l++){
    for(c = 0; c < 4; c++){
      vetsoma[l] += matriz[l][c];
    }
  }
  
  for(l = 0; l < 3; l++){
    for(c = 0; c < 4; c++){
      vetmulti[c] = (vetmulti[c] * matriz[l][c]);
    }
  }
  
  printf("Soma Linhas = %d\n", vetsoma[0]);
  printf("Soma Linhas = %d\n", vetsoma[1]);
  printf("Soma Linhas = %d\n", vetsoma[2]);
  printf("\n");
  printf("Multiplicação Colunas = %d\n", vetmulti[0]);
  printf("Multiplicação Colunas = %d\n", vetmulti[1]);
  printf("Multiplicação Colunas = %d\n", vetmulti[2]);
  printf("Multiplicação Colunas = %d\n", vetmulti[3]);
  
  return 0;
}