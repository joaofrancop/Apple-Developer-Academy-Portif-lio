/*Escreva um programa para ler uma temperatura dada na escala Fahrenheit e exibir o equivalente em Celsius. C=5/9 *(F-32*/

#include <stdio.h>

int main() {

  float F, C;

  printf("insira a temperaura em Fahrenheit: ");
  scanf("%f", &F);

  C = 5.0/9.0 * (F-32);

  printf("o valor da temperatura em Celsius é: %.2f", C);

  
  return 0;
}