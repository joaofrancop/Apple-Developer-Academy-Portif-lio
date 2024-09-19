/*Defina uma matriz de 4 linhas por 4 colunas e imprima a multiplicação de sua diagonal principal*/

#include <stdio.h>

int main () {

  int diagonal[4][4];
  int l, c, resultado = 0;

  for(l = 0; l < 4; l++){
    for(c = 0; c < 4; c++){
      printf("Linha %d Coluna %d: ", l, c);
      scanf("%d", &diagonal[l][c]);
    }
    printf("\n");
  }
  
  for(l = 0; l < 4; l++){
    for(c = 0; c < 4; c++){
      if(l == c){
      resultado = resultado + diagonal[l][c]; 
      printf("%d, %d\n", l, c);
      }
    }
  }
  printf("Resultado: %d", resultado);
  
  return 0;
}