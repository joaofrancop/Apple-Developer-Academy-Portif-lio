/*Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de
três e que se encontram no conjunto dos números de 1 até 500.*/

#include <stdio.h>

int main(void){

  int soma = 0, impares, i = 0;

  for(i = 0; i <= 500; i++){
    if((i % 2 != 0) && (i % 3 == 0)){
      soma += i;
      printf("%d\n", i);
    }
  }
  printf("Soma: %d", soma);
  
  return 0;
}