/*Escreva um algoritmo que encontre o quinto número maior que 1000 cuja divisão por 11 tenha resto 5*/

#include <stdio.h>

int main(void){

  int i, cont = 0;

  for(i = 1001; cont < 5; i++){
    if(i % 11 == 5){
      cont++;
      printf("%d\n", i);
    }
  }
  printf("%d", i);
  return 0;
}