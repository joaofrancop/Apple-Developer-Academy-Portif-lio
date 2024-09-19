/*Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em
progressão aritmética contendo 10 valores.
○ Por exemplo, com A = 1 e R = 3, tem-se “1 4 7 10 13 16 19 22 25 28”*/

#include <stdio.h>

int main(void){
  
  int a, r, i, pa;

  printf("Digite o valor inicial: ");
  scanf("%d", &a);

  printf("Digite a razão: ");
  scanf("%d", &r);
  
  for(i = 0; i < 10; i++){
    pa = a + (i * r);
    printf("%d\n", pa);
  }  
  return 0;
}