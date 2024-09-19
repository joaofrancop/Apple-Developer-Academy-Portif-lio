/*Escreva um algoritmo que leia vários números e informe quantos números entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução*/

#include <stdio.h>

int main(void){

  int n = 1, i = 0;

  while(n != 0){
  if((n >= 100)&&(n <= 200)){
    i++;
  }
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
  }
  
  printf("%d", i);
  
  return 0;
}