/*Escreva um programa que leia uma string do teclado e a escreva na tela ao contrário (do final para o
início).*/

#include <stdio.h>
#include <string.h>

int main(){

  char string[20];
  int i;
  int num;

  printf("Insira uma string: ");
  fgets(string, 20, stdin);

  num = strlen(string);
    
  for(i = num; i >= 0;i--){
    printf("%c", string[i]);
  }
  
  return 0;
}  