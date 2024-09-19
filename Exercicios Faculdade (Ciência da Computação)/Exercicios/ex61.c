/*Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em
progressão geométrica contendo 10 valores.
○ Por exemplo, com A = 1 e R = 3, tem-se “1.00 3.00 9.00 27.00 81.00 243.00 729.00 2187.00
6561.00 19683.00”*/

#include <stdio.h>
#include <math.h>  

int main(void){

  int a, r, i, pg = 0;

  printf("Digite o valor inicial: ");
  scanf("%d", &a);

  printf("Digite a razão: ");
  scanf("%d", &r);

  for(i = 0; i < 10; i++){
    pg = a * pow(r, i);
    printf("%d\n", pg);
  }
  
  return 0;
}