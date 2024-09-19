/* 1. Elabore um algoritmo que leia dois números e imprima qual é maior, qual é
menor, ou se são iguais.*/

#include <stdio.h>

int main() {

  float A, B;

  printf("Digite o número A: ");
  scanf("%f", &A);

  printf("Digite o número B: ");
  scanf("%f", &B);

  if (A == B) {
    printf("Os numeros são iguais." );
  } else if (A > B) {
    printf("O maior número é o A", A);
  } else if (B > A) {
    printf("O maior número é o B", B);
  }
  return 0;
}
