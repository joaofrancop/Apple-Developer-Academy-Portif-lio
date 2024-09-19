/*defina uma matriz com 3 linhas e 5 colunas e imprima o somatorio dos elementos de sua ultima coluna.*/

#include <stdio.h>

int main(void) {
  
  int estoque[3][5];
  int l, c, soma = 0;

  //percorre linhas
  for(l = 0; l < 3; l++){

    //percorre colunas
    for(c = 0; c < 5; c++){
      printf("Linha %d Coluna %d: ", l, c);
      scanf("%d", &estoque[l][c]);
    }
    printf("\n");
  }
  
 //percorre matriz
  for(l = 0; l < 3; l++){
    for(c = 0; c < 5; c++){
      printf("%2d ", estoque[l][c]);
    }
    printf("\n");
  }

  printf("Soma inicial: %d\n", soma);
  
 //so ultima coluna
  for(l = 0; l < 3; l++){
    soma += estoque[l][4];
    printf("Soma atualizada: %d\n", soma);
  }
  
  return 0;
}