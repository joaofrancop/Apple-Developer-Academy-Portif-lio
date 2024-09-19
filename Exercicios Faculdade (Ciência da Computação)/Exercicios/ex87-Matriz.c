/*Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10.*/

#include <stdio.h>

int main(void) {
  
  int tabuada[11][11];
  int l, c, resultado;

  for(l = 0; l < 11; l++){
    for(c = 0; c < 11; c++){
      resultado = l*c;
      printf("%d x %d = %d\n", l, c, resultado);
    }
    printf("\n");
  }
  
  return 0;
}