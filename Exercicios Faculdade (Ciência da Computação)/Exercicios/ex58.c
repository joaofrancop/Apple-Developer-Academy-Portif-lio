/*Elabore um programa que efetue o cálculo do fatorial do valor inteiro 5 e apresente o resultado dessa
operação.
DICA: o fatorial é o produto (resultado da multiplicação) dos números inteiros positivos desde 1 até o
limite informado, neste caso 5.
5! = 1 * 2 * 3 * 4 * 5 = 120*/

#include <stdio.h>

int main(void){

  int i = 1;
  double fatorial = 1;
  
  for(i = 1; i <= 200; i++){

    fatorial = i * fatorial;
    printf("Fatorial de %i = %g\n", i, fatorial);
    
  }
  
  return 0;
}