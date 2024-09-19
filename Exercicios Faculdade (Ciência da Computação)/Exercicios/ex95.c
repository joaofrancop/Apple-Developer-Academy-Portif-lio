/*Escreva um programa que construa uma matriz de 5 linhas por 5
  colunas de números reais e coloque o conteúdo de sua diagonal principal
  dentro de um vetor e o imprima.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));
  
  float matriz[5][5];
  float diagonal[5];
  int l, c, i = 0;

  for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
      matriz[l][c] = rand() % 10000 / 100.0;
       printf("%5.2f  ", matriz[l][c]);
    }
    printf("\n");
  }
  for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
  if(l == c){
    diagonal[i] = matriz[l][c];
    i++;
       }
    }
  }
  printf("\nDiagonal principal:  ");
  for(i = 0; i < 5; i++){
  printf("%5.2f  ", diagonal[i]);
  }
  
  return 0;
}