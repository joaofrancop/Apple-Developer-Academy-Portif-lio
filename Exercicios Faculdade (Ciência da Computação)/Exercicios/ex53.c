/*Escreva um programa que leia uma sequência de números inteiros positivos e negativos, e imprima
a soma dos números positivos e a soma dos números negativos.*/

#include <stdio.h>

int main(void){

  int num, soma_pos = 0, soma_neg = 0;

  do{
    printf("\nDigite um número: ");
    scanf(" %d", &num);

    if(num > 0){
      soma_pos += num;

    } else if (num < 0){
      soma_neg += num;
    }
    } while (num != 0);
  
  printf("\nSoma dos positivos: %i", soma_pos);
  printf("\nSoma dos negativos: %i", soma_neg);
  
  return 0;
}