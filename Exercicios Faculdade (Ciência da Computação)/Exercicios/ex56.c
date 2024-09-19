/*Escreva um programa que leia uma sequência de números inteiros positivos e imprima o menor e o
maior número lido*/

#include <stdio.h>

int main(void){

  int n, maior = 0, menor = 1;

  do{
    printf("Digite um número: ");
    scanf(" %d", &n);

    if (n > maior){
      maior = n;
    }
    if (n < menor){
      menor = n;
    }
  } while(n != 0);

  printf("O maior número é %d e o menor é %d", maior);
    
  return 0;
}