/*Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados no
intervalo de 0 a 20.
*/

#include <stdio.h>

int main(void){

  int i = 1;

  while(i <= 20){
    if(i % 2 != 0){
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}