/*Escreva um programa que leia do teclado valores inteiros para
  uma matriz de 5 linhas por 5 colunas. Em seguida, leia do teclado um valor
  numérico X. Conte quantos valores múltiplos de X existem na matriz e
  mostre-os na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

  srand(time(NULL));
  
  int matriz[5][5];
  int l, c, n, cont = 0;

  for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
      matriz[l][c] = rand() % 100;
         printf("%3.d  ", matriz[l][c]);
      }
      printf("\n");
  }

  printf("\nInsira o verificador: ");
  scanf("%d", &n);

  for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
      if((matriz[l][c]) % n == 0 && (matriz[l][c] >= n)){
        cont++;
      }
    }
  }

  printf("\n\nNumeros multiplos de %d: %d \n", n, cont);

  for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
      if((matriz[l][c]) % n == 0 && (matriz[l][c] >= n)){
        printf("\n%d ", matriz[l][c]);
      }
    }
  }
  
  return 0;
}