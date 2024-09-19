/*2. Faça um programa em para calcular e imprimir o valor do volume de uma lata
  de óleo, utilizando a fórmula:
  volume = PI * raio² * altura*/


#include <stdio.h>

#define PI 3.1415

int main() {

float raio, altura, volume;

  printf("insira o valor do raio:\n ");
  scanf("%f", &raio);

  printf("insira o valor da altura:\n ");
  scanf("%f", &altura);


volume = PI*(raio*raio)*altura;

  printf("o valor do volume é: %.1f\n", volume);


  return 0;
}