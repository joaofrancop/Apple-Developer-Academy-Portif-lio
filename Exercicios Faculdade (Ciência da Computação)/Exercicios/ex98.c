/*Escreva um programa que deverá permitir que o usuário entre
com os valores dos elementos de uma matriz quadrada de ordem 4 (4 linhas e
4 colunas) e possibilite ao usuário realizar as seguintes funcionalidades:
a. Imprimir todos os elementos da matriz;
b. Somar os quadrados de todos os elementos da primeira coluna;
c. Somar todos os elementos da terceira linha;
d. Somar os elementos da diagonal principal; e
e. Somar todos os elementos de índice par da segunda linha*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  int l, c, n, q = 0, i = 0;
  int matriz[4][4];

  for(l = 0; l < 4; l++){
    for(c = 0; c < 4; c++){
      matriz[l][c] = rand() % 100;
    printf("%3d", matriz[l][c]);
    }
    printf("\n");
  }
  printf("\n");
  printf("1- Imprimir todos os elementos da matriz.\n2- Somar os quadrados de todos os elementos da primeira coluna.\n3- Somar todos os elementos da terceira linha.\n4- Somar os elementos da diagonal principal.\n5- Somar todos os elementos de índice par da segunda linha.\n\nEscolha uma funcionalidade para a matriz [1, 5]: ");
    scanf("%d", &n);

  if(n == 1){
    printf("\n");
    for(l = 0; l < 4; l++){
      for(c = 0; c < 4; c++){
      printf("%3d", matriz[l][c]);
      }
      printf("\n");
    }
  }else if(n == 2){
    for(c = 0; c < 1; c++){
      for(l = 0; l < 4; l++){
        q = q + ((matriz[l][c])*(matriz[l][c]));
      }
      printf("\n%d", q);
    }
  }else if(n == 3){
    for(l = 2; l < 3; l++){
      for(c = 0; c < 4; c++){
        q = q + (matriz[l][c]);
      }
      printf("\n%d", q);
    }
  }else if(n == 4){
    for(l = 0; l < 4; l++){
      for(c = 0; c < 4; c++){
     if(l == c){
       q = q + matriz[l][c];
        }
      }
    }
    printf("\n%d", q);
  }else if(n == 5){
    for(l = 1; l < 2; l++){
      for(c = 0; c < 4; c++){
     if(i % 2 == 0){
       q = q + matriz[l][c];
        }
      i++;
      }
    }
    printf("\n%d", q);
  }else{
    printf("\nValor inválido.");
  }

  
  return 0;
}