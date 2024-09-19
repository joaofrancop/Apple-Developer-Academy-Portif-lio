/* Programa que recebe um numero e mostra seus antecessor e sucessor */

#include <stdio.h>

int main()  {

  int numero, antecessor, sucessor;

  printf("insira um numero inteiro: ");
  scanf("%d", &numero);

antecessor = numero - 1;
sucessor = numero + 1;

  printf("o antecessor de %d é %d e o sucessor é %d",numero, antecessor, sucessor);
  
  return 0;
}