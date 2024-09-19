/*1. Escreva um algoritmo que calcule e apresente na tela o resultado de C = ( A
+ B ) x B.*/
 

#include <stdio.h>



int main() {

  int a, b, c;
  
  printf("Digite A\n");
  scanf("%d", &a);

  printf("Digite B\n");
  scanf("%d", &b);

  c = (a+b)*b;

  printf("O valor de C é: %d\n", c);

  
  return 0;
}