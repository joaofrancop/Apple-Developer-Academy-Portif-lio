/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.*/

#include <stdio.h>

int main(void) {

  int a, b, c;

  printf("Insira o valor de a: ");
  scanf("%d", &a);

  printf("Insira o valor de b: ");
  scanf("%d", &b);

  printf("Insira o valor de c: ");
  scanf("%d", &c);

  if (a >= b && b >= c) {
    
    printf("%d\n%d\n%d", c, b, a);
  
  } else if (b >= a && a >= c) {

    printf("%d\n%d\n%d", c, a, b);
    
  } else if (c >= a && a >= b) {

    printf("%d\n%d\n%d", b, a, c);
  
  } else if (a >= c && c >= b) {

    printf("%d\n%d\n%d", b, c, a);
    
  } else if (b >= c && c >= a) {

    printf("%d\n%d\n%d", a, c, b);
    
  } else if (c >= b && b >= a) {

    printf("%d\n%d\n%d", a, b, c);
    
  } else {

    printf("Valor inválido"); 
    
  }

  printf("\n\n%d\n%d\n%d", a, b, c);

  return 0;
    
    }