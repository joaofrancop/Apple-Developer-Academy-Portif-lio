/*2. Escreva um programa que leia dois números inteiros A e B do
teclado e imprima as mensagens “nulo”, “sinal negativo” ou “sinal positivo”,
conforme o resultado da multiplicação de A por B.*/

#include <stdio.h>

int main(){

  int a, b;

  printf("insira os valores de a e b: ");
  scanf( "%i %i", &a, &b);

  if((a*b) == 0){
    printf("nulo");
  }else if((a*b)>0){
    printf("sinal positivo");
  }else if((a*b)<0){
    printf("sinal negativo");
  }
  return 0;
}