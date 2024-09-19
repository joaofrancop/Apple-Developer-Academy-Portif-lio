/*Implemente um programa que exiba os conteúdos dos itens de índice par de um vetor*/

#include <stdio.h>

int main(void){

  int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;

  for(i = 0; i < 10; i++){
    if(i % 2 == 0){
      printf("%d\n", vetor[i]);
    }
  }
                                              
  return 0;
}