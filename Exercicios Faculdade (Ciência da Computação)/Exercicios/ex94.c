/*Escreva um algoritmo que construa uma matriz de 10 linhas e 15
  colunas contendo números inteiros. Em seguida escreva a soma dos
  elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
  escreva a soma dos elementos de cada coluna e se a soma dos elementos é
  par ou ímpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));
  
  int matriz[10][15];
  int vetlinha[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int vetcoluna[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int l, c;

  for(l = 0; l < 10; l++){
    for(c = 0; c < 15; c++){
    matriz[l][c] = rand() % 100;
    printf("%3d ", matriz[l][c]);
    }
    printf("\n");
  }
  
  printf("\n");
  
  for(l = 0; l < 10; l++){
    for(c = 0; c < 15; c++){
      vetlinha[l] = vetlinha[l] + matriz[l][c];
    }
  }
  for(l = 0; l < 10; l++){
    for(c = 0; c < 15; c++){
    }
     printf("\nLinha %d: %d", l, vetlinha[l]);
  }
  printf("\n");
  
  for(c = 0; c < 15; c++){
    for(l = 0; l < 10; l++){
      vetcoluna[c] = vetcoluna[c] + matriz[l][c];
    }
  }
  for(c = 0; c < 15; c++){
    for(l = 0; l < 10; l++){
    }
    printf("\nColuna %d: %d", c, vetcoluna[c]);
  }

  
  return 0;
}