/* Escreva um programa que receba um caractere e verifique se ele é uma vogal ou uma consoante*/

#include <stdio.h>

int main(void) {

  char x;

  printf("Insira a letra: ");
  scanf(" %c", &x);

  switch(x){
    case 'a': printf("Vogal"); break;
    case 'e': printf("Vogal"); break;
    case 'i': printf("Vogal"); break;
    case 'o': printf("Vogal"); break;
    case 'u': printf("Vogal"); break;
    default: printf("Consoante"); break;
  }
  
  return 0;
}