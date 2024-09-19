/*Escreva um programa que gere uma matriz de inteiros de 4 linhas
  por 4 colunas e crie sua transposta (matriz transposta é toda a matriz onde são
  trocadas as linhas pelas colunas ou vice-versa).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));
  
  int matriz[4][4];
  int transposta[4][4];
  int l, c, aux;
  
printf("Matriz origem:\n\n");
  
  for(l = 0; l < 4; l++){
    for(c = 0; c < 4; c++){
      matriz[l][c] = rand() % 100;
       printf("%3.d  ", matriz[l][c]);
    }
    printf("\n");
  }
  
  printf("\nMatriz transposta:\n\n");
  
  for(l = 0; l < 4; l++){
    for(c = 0; c < 4; c++){

      printf("%3.d  ", matriz[c][l]);
    }
    printf("\n");
  }

  return 0;
}
